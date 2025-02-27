#include "pch.h"
#include "../common/common.h"
#include "../common/debug.h"
#include <iostream>

uint32_t dword_180021AA0[16];
uint32_t dword_180021A60[16];
int64_t qword_18002C7E0[34];
HANDLE HeapHandle;
// Global function pointers for memory allocation and deallocation
PVOID(__fastcall* XmpAllocRoutine)(SIZE_T, uint64_t) = nullptr;
BOOLEAN(__stdcall* XmpFreeRoutine)(PVOID, uint64_t) = nullptr;
// Define the global critical section lock
XmpAllocationHookLock_t XmpAllocationHookLock = {
    &XmpAllocationHookLock_DEBUG, // Pointer to debug info
    -1,                           // LockCount (unowned)
    0,                            // RecursionCount
    0,                            // OwningThread
    0,                            // LockSemaphore
    0x4000000                     // SpinCount (high-performance)
};

// Define the debug info structure (can be initialized later if needed)
RTL_CRITICAL_SECTION_DEBUG XmpAllocationHookLock_DEBUG = { 0 };


// Define the global variables here (only once)
void* XmpHeaps[32] = { 0 };

int XmpHeapPageTypes[16] = {
    PAGE_READWRITE,         // 0 - Standard heap memory
    PAGE_READWRITE,         // 1 - General memory use
    PAGE_READWRITE,         // 2 - Shared memory
    0,                      // 3 - Unused/invalid
    PAGE_READWRITE,         // 4 - Standard heap allocation
    PAGE_READWRITE,         // 5 - Memory-mapped I/O
    PAGE_READWRITE,         // 6 - Stack allocation
    0,                      // 7 - Unused/invalid
    PAGE_READWRITE,         // 8 - System memory allocation
    0,                      // 9 - Unused
    PAGE_EXECUTE_READ,      // 10 - Executable code memory
    0,                      // 11 - Unused
    PAGE_READWRITE,         // 12 - Shared heap
    0,                      // 13 - Unused
    PAGE_READWRITE,         // 14 - Custom memory pool
    0                       // 15 - Reserved
};

const int XmpHeapAllocationTypes[16] = {
    MEM_COMMIT | MEM_RESERVE,   // 0: Standard committed memory
    MEM_LARGE_PAGES,            // 1: Large page allocation (if supported)
    MEM_COMMIT,                 // 2: Committed memory only
    MEM_RESERVE,                // 3: Reserved memory (uncommitted)
    MEM_TOP_DOWN,               // 4: Allocate from highest address
    MEM_WRITE_WATCH,            // 5: Write-watched memory pages
    MEM_COMMIT | MEM_TOP_DOWN,  // 6: Committed with top-down allocation
    MEM_RESERVE | MEM_TOP_DOWN, // 7: Reserved with top-down allocation
    MEM_PHYSICAL,               // 8: Physical memory mapping
    MEM_RESET,                  // 9: Reset memory (discards data)
    MEM_RESET_UNDO,             // 10: Undo memory reset
    MEM_LARGE_PAGES | MEM_COMMIT, // 11: Large Pages with Commit
    MEM_MAPPED,                 // 12: Mapped memory
    MEM_PRIVATE,                // 13: Private memory allocation
    MEM_COMMIT | MEM_LARGE_PAGES, // 14: Large Pages with Commit (alt)
    MEM_COMMIT | MEM_RESERVE | MEM_TOP_DOWN // 15: Fully committed, reserved, top-down
};
//Ignoring this as for now (just hope it's not being used and it's not useful.)
__int64 NlsUpdateLocale_X() {
    return 0();
}

void WakeByAddressSingle_X(PVOID Address) {
    WakeByAddressSingle(Address);
}

void WakeByAddressAll_X(PVOID Address) {
    WakeByAddressAll(Address);
}

BOOL __stdcall WaitOnAddress_X(volatile void* Address, PVOID CompareAddress, SIZE_T AddressSize, DWORD dwMilliseconds)
{
    return WaitOnAddress(Address, CompareAddress, AddressSize, dwMilliseconds);
}
BOOL JobTitleMemoryStatus_X(void* pJob, LPTITLEMEMORYSTATUS Buffer) {
    __int64 jobInfo[7]; // Buffer to store job object memory information
    NTSTATUS status;
    DEBUG_PRINT();
    // Validate input parameters
    if (!pJob || !Buffer || Buffer->dwLength != sizeof(TITLEMEMORYSTATUS)) {
        SetLastError(ERROR_INVALID_PARAMETER);
        return FALSE;
    }

    // Query job memory information
    status = QueryInformationJobObject(pJob, (JOBOBJECTINFOCLASS)(JobObjectGroupInformation | 0x10), jobInfo, JOB_INFO_SIZE, NULL);
    if (status < 0) {
        RtlSetLastWin32ErrorAndNtStatusFromNtStatus(status);
        return FALSE;
    }

    // Extract job memory stats
    DWORDLONG totalMem = jobInfo[0];
    DWORDLONG usedMem = jobInfo[1];
    DWORDLONG peakLegacy = jobInfo[2];
    DWORDLONG totalLegacy = jobInfo[3];
    DWORDLONG limitLegacy = jobInfo[4];
    DWORDLONG currentTitle = jobInfo[5];
    DWORDLONG peakTitle = jobInfo[6];

    // Populate TITLEMEMORYSTATUS structure
    Buffer->ullTotalMem = totalMem;
    Buffer->ullAvailMem = totalMem - usedMem;
    Buffer->ullLegacyUsed = peakLegacy;
    Buffer->ullLegacyPeak = totalLegacy;
    Buffer->ullLegacyAvail = limitLegacy - peakLegacy;
    Buffer->ullTitleUsed = currentTitle;
    Buffer->ullTitleAvail = peakTitle - currentTitle;

    return TRUE; // Success
}
// We ignore setting this as we actually don't care about this.
bool SetThreadpoolAffinityMask_X()
{
    return true;
}

BOOL SetThreadName_X(HANDLE hThread, const WCHAR* lpThreadName)
{
    UNICODE_STRING DestinationString;

    RtlInitUnicodeString(&DestinationString, lpThreadName);
    NTSTATUS Status = NtSetInformationThread(hThread, ThreadNameInformation, &DestinationString, 0x10u);
    if (NT_SUCCESS(Status))
        return TRUE;
    return FALSE;
}

void QueryProcessorSchedulingStatistics_X(PPROCESSOR_SCHEDULING_STATISTICS ProcessorSchedulingStatistics)
{
    LARGE_INTEGER frequency = { 0 };
    LARGE_INTEGER counter = { 0 };

    // Query the performance frequency and counter
    QueryPerformanceFrequency(&frequency);
    QueryPerformanceCounter(&counter);

    // Set a1[2] based on the performance counter and frequency
    ProcessorSchedulingStatistics->GlobalTime = counter.QuadPart / (frequency.QuadPart / 10000000);

    // Use the CPUID instruction
    int cpuInfo[4] = { 0 }; // {EAX, EBX, ECX, EDX}
    __cpuid(cpuInfo, 0);  // This gets the highest function supported by CPUID

    // Combine RBX and RAX as a 64-bit value and store in *a1
    ProcessorSchedulingStatistics->RunningTime = __ull_rshift(cpuInfo[1], cpuInfo[0]);  // EBX (RBX), EAX (RAX)

    // Combine RDX and RCX as a 64-bit value and store in a1[1]
    ProcessorSchedulingStatistics->IdleTime = __ull_rshift(cpuInfo[3], cpuInfo[2]); // EDX (RDX), ECX (RCX)
}


BOOL GetThreadName_X(HANDLE hThread, PWSTR lpThreadName, SIZE_T nBufferLength, SIZE_T* pnRequiredLength)
{
    ULONG v11; // ebx
    NTSTATUS iError; // edi
    ULONG ReturnLength; // [rsp+78h] [rbp+20h] BYREF

    if (!pnRequiredLength)
    {
        SetLastError(STATUS_INVALID_PARAMETER);
        return FALSE;
    }

    PUNICODE_STRING lpData = NULL;
    v11 = 144;
    SIZE_T iNameSize = 0;
    while (TRUE)
    {
        if (lpData)
            HeapFree(GetProcessHeap(), 0, lpData);
        lpData = (PUNICODE_STRING)HeapAlloc(GetProcessHeap(), 0, v11);
        if (!lpData)
        {
            SetLastError(STATUS_NO_MEMORY);
            return FALSE;
        }
        iError = NtQueryInformationThread(hThread, ThreadNameInformation, lpData, v11, &ReturnLength);
        if (iError != STATUS_INFO_LENGTH_MISMATCH && iError != STATUS_BUFFER_TOO_SMALL && iError != STATUS_BUFFER_OVERFLOW)
            break;
        v11 = ReturnLength;
    }
    if (NT_SUCCESS(iError))
    {
        iNameSize = lpData->Length / 2;
        if (lpThreadName && iNameSize < nBufferLength)
        {
            memcpy(lpThreadName, lpData->Buffer, iNameSize * sizeof(WCHAR));
            lpThreadName[iNameSize] = 0;
        }
        else
        {
            ++iNameSize;
            iError = STATUS_BUFFER_TOO_SMALL;
        }
    }

    *pnRequiredLength = iNameSize;
    HeapFree(GetProcessHeap(), 0, lpData);
    if (!NT_SUCCESS(iError))
    {
        SetLastError(iError);
        return FALSE;
    }
    return TRUE;
}

void GetSystemOSVersion_X(LPSYSTEMOSVERSIONINFO VersionInformation) {
    if (!VersionInformation)
    {
        return;
    }

    int cpuInfo[4] = { -1 };

    // @Patoke note: the XBOX passes 0x4000000D for its default hypervisor, we're not running a hypervisor
    // Execute CPUID with EAX = 1
    __cpuid(cpuInfo, 1);

    int eax = cpuInfo[0];
    int ebx = cpuInfo[1];
    int edx = cpuInfo[3];

    VersionInformation->MajorVersion = LOBYTE(ebx);             // Lowest 8 bits of EBX
    VersionInformation->MinorVersion = HIBYTE(HIDWORD(eax));    // Highest 8 bits of EAX

    VersionInformation->Revision = LOWORD(edx);                 // Lowest 16 bits of EDX
    VersionInformation->BuildNumber = LOWORD(eax);              // Lowest 16 bits of EAX     
}


CONSOLE_TYPE GetConsoleType_X() {
    return CONSOLE_TYPE::CONSOLE_TYPE_XBOX_ONE_X_DEVKIT;
}

PVOID __fastcall XMemAllocDefault_X(SIZE_T dwSize, uint64_t flags)
{
    if (dwSize == 0) {
        return NULL;
    }

    SIZE_T regionSize = dwSize;
    PVOID baseAddress = NULL;
    unsigned int allocType;
    HANDLE titleHeap;
    ULONG protectFlags;
    int allocationFlags;

    // Determine heap index
    unsigned int heapIndex = (flags >> 29) & 0xF;
    if (!XmpHeapPageTypes[heapIndex]) {
        return NULL;
    }

    // Check allocation type
    if (XmpHeapAllocationTypes[heapIndex] != 0x10000000) {
        unsigned int heapFlags = flags >> 24;
        if ((flags & 0x1F) <= 4) {
            allocType = 32;  // Standard heap allocation
            if ((flags & 0xC000) == 0) {
                goto allocate_heap;
            }
        }
        allocType = 33;  // Virtual memory allocation
    }
    else {
        allocType = heapIndex;
        if ((flags & 0xC000) < 0x4000) {
            flags |= 0x4000;
        }

        unsigned int flagBits = flags & 0x1F;
        if (flagBits > 0x10 || dwSize > 0x20000) {
            allocType = 33;  // Virtual allocation
        }
        else if (flagBits > 0xC || dwSize > 0xF00) {
            allocType |= 0x10;
        }
    }

allocate_heap:

    if (allocType == 32) {  // Heap allocation
        titleHeap = HeapCreate(0, 0, 0x80002u);
        return titleHeap ? HeapAlloc(titleHeap, 0, regionSize) : NULL;
    }

    if (allocType == 33) {  // Virtual memory allocation
        int memFlag = MEM_COMMIT | MEM_RESERVE;
        switch (flags >> 14) {
        case 1: memFlag = MEM_LARGE_PAGES; break;
        case 2: memFlag = MEM_PHYSICAL; break;
        }

        allocationFlags = XmpHeapAllocationTypes[heapIndex] | memFlag;
        protectFlags = XmpHeapPageTypes[heapIndex];

        if (allocationFlags & 0x400000) {
            allocationFlags &= ~0x400000;
            if (!(flags >> 14)) {
                allocationFlags |= MEM_TOP_DOWN;
            }
        }

        baseAddress = VirtualAlloc(NULL, regionSize, allocationFlags, protectFlags);
        if (baseAddress != NULL) {
            return baseAddress;
        }
    }

    HANDLE heapHandle = XmpHeaps[allocType];
    if (!heapHandle) {
        heapHandle = (HANDLE)HeapCreate(HEAP_NO_SERIALIZE, 0, 0);
        XmpHeaps[allocType] = heapHandle;
    }

    return heapHandle ? HeapAlloc(heapHandle, 0, regionSize) : NULL;
}
BOOLEAN __stdcall XMemFreeDefault_X(PVOID pAddress, uint64_t dwAllocAttributes) {
    if (!pAddress) {
        return FALSE; // Avoid processing NULL pointers
    }
    DEBUGPRINT();
    uint64_t allocTypeIndex = (dwAllocAttributes >> 29) & 0xF;
    PVOID baseAddress = pAddress;
    ULONG_PTR regionSize = 0;

    // Case 1: Freeing memory allocated using the title heap
    if (!XmpHeapAllocationTypes[allocTypeIndex] &&
        (dwAllocAttributes & 0x1F000000u) <= 0x4000000u &&
        !(dwAllocAttributes & 0xC000))
    {
        static HANDLE XmpTitleHeap = NULL;
        if (!XmpTitleHeap) {
            XmpTitleHeap = HeapCreate(0, 0, 0x80002u);
        }
        return (XmpTitleHeap && pAddress) ? HeapFree(XmpTitleHeap, 0, pAddress) : FALSE;
    }

    // Case 2: Try to locate the correct heap in XmpHeaps
    void* heapRegion = XmpHeaps[allocTypeIndex];
    if (!heapRegion ||
        !(*(PVOID*)((uintptr_t)heapRegion + 48)) ||
        (*(PVOID*)((uintptr_t)heapRegion + 48) > pAddress) ||
        (*(PVOID*)((uintptr_t)heapRegion + 56) < pAddress))
    {
        heapRegion = XmpHeaps[allocTypeIndex + 16];
        if (!heapRegion ||
            !(*(PVOID*)((uintptr_t)heapRegion + 48)) ||
            (*(PVOID*)((uintptr_t)heapRegion + 48) > pAddress) ||
            (*(PVOID*)((uintptr_t)heapRegion + 56) < pAddress))
        {
            heapRegion = NULL;
        }
    }

    // Case 3: If a valid heap was found, free the memory using HeapFree
    if (heapRegion) {
        return HeapFree(heapRegion, 0, pAddress);
    }

    // Case 4: If no heap was found, free virtual memory using VirtualFree
    return VirtualFree(baseAddress, 0, MEM_RELEASE);
}


void XMemFree_X(PVOID pADDRESS, uint64_t dwAllocAttributes) {
    XMemFreeDefault_X(pADDRESS, dwAllocAttributes);
}

// Define PVOID for non-Windows environments if needed
#ifndef _WINDEF_
typedef void* PVOID;
#endif



PVOID XMemAlloc_X(SIZE_T dwSize, uint64_t flags) {
    return XMemAllocDefault_X(dwSize, flags);
}

NTSTATUS __fastcall XMemSetAllocationHooks_X(PVOID(__fastcall* XMemAlloc)(SIZE_T, uint64_t), BOOLEAN(__stdcall* XMemFree)(PVOID, uint64_t))
{
    // Enter critical section using direct WinAPI
    EnterCriticalSection((LPCRITICAL_SECTION)&XmpAllocationHookLock);

    if (XMemAlloc)
    {
        // Set custom memory management functions
        XmpAllocRoutine = XMemAlloc;
        XmpFreeRoutine = XMemFree;
    }
    else
    {
        // Use default memory functions
        XmpAllocRoutine = XMemAllocDefault_X;
        XmpFreeRoutine = XMemFreeDefault_X;
    }

    // Leave critical section using direct WinAPI
    LeaveCriticalSection((LPCRITICAL_SECTION)&XmpAllocationHookLock);

    return STATUS_SUCCESS;
}

#define PROTECT_FLAGS_MASK (PAGE_EXECUTE | PAGE_EXECUTE_READ | PAGE_EXECUTE_READWRITE | PAGE_EXECUTE_WRITECOPY | PAGE_NOACCESS | PAGE_READONLY | PAGE_READWRITE | PAGE_WRITECOPY | PAGE_GUARD | PAGE_NOCACHE)
#define ALLOCATION_FLAGS_MASK (MEM_COMMIT | MEM_RESERVE | MEM_RESET | MEM_LARGE_PAGES | MEM_PHYSICAL | MEM_TOP_DOWN | MEM_WRITE_WATCH)

LPVOID VirtualAlloc_X(
    LPVOID lpAddress,
    SIZE_T dwSize,
    DWORD  flAllocationType,
    DWORD  flProtect
)
{
	flProtect &= PROTECT_FLAGS_MASK;
	flAllocationType &= ALLOCATION_FLAGS_MASK;

    LPVOID ret = VirtualAlloc(lpAddress, dwSize, flAllocationType, flProtect);
    std::cout << std::hex << flAllocationType << std::endl; // Check for bad memory flags for Halo 5 boot

	// backup plan in the case that VirtualAlloc fails despite the flags being masked away
	if (ret == nullptr)
	{
		printf("VirtualAlloc failed with %i, using backup...\n", GetLastError());
        ret = VirtualAlloc(lpAddress, dwSize, MEM_COMMIT, flProtect);
	}

    assert(ret != nullptr && "VirtualAlloc should not fail, check proper handling of xbox-one specific memory protection constants.");

	return ret;
}
BOOL ToolingMemoryStatus_X(LPTOOLINGMEMORYSTATUS buffer)
{
    DEBUG_PRINT();
    __int64 SystemInformation[4];

    if (buffer->dwLength != 40)
    {
        SetLastError(0x57u);
        return FALSE;
    }

    NTSTATUS Status = NtQuerySystemInformation((SYSTEM_INFORMATION_CLASS)(0x96 | 0x80), SystemInformation, 0x20u, 0i64);
    if (!NT_SUCCESS(Status))
    {
        SetLastError(Status);
        return FALSE;
    }

    buffer->ullTotalMem = SystemInformation[0];
    buffer->ullAvailMem = SystemInformation[1];
    buffer->ulPeakUsage = SystemInformation[2];
    buffer->ullPageTableUsage = SystemInformation[3];

    return TRUE;
}
//Vodka Doc: 1 to 1 copy from the original function
BOOL __stdcall TitleMemoryStatus_X(PTITLEMEMORYSTATUS Buffer) {
    DEBUG_PRINT();
    if (!Buffer || Buffer->dwLength != sizeof(TITLEMEMORYSTATUS)) {
        SetLastError(ERROR_INVALID_PARAMETER);
        return FALSE;
    }

    NTSTATUS status;
    DWORDLONG ProcessInformation[7] = { 0 };
    status = NtQueryInformationProcess(
        GetCurrentProcess(),
        (PROCESSINFOCLASS)(0x3A | 0x3A),
        &ProcessInformation,
        sizeof(ProcessInformation),
        NULL);

    if (status < 0) {
        RtlSetLastWin32ErrorAndNtStatusFromNtStatus(status);
        return FALSE;
    }

    Buffer->ullTotalMem = ProcessInformation[0];
    Buffer->ullAvailMem = ProcessInformation[0] - ProcessInformation[1];
    Buffer->ullLegacyUsed = ProcessInformation[2];
    Buffer->ullLegacyAvail = ProcessInformation[4] - ProcessInformation[2];
    Buffer->ullLegacyPeak = ProcessInformation[3];
    Buffer->ullTitleUsed = ProcessInformation[5];
    Buffer->ullTitleAvail = ProcessInformation[6] - ProcessInformation[5];

    return TRUE;
}
