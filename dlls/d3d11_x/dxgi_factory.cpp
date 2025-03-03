#include "dxgi_factory.h"
#include <windows.ui.core.h>
#include <wrl/client.h>
#include <wrl/wrappers/corewrappers.h>

#include "dxgi_swapchain.h"
#include "../kernelx/CoreWindowWrapperX.h"

#define DXGI_SWAPCHAIN_FLAG_MASK DXGI_SWAP_CHAIN_FLAG_NONPREROTATED | DXGI_SWAP_CHAIN_FLAG_ALLOW_MODE_SWITCH | DXGI_SWAP_CHAIN_FLAG_GDI_COMPATIBLE \
		| DXGI_SWAP_CHAIN_FLAG_RESTRICTED_CONTENT | DXGI_SWAP_CHAIN_FLAG_RESTRICT_SHARED_RESOURCE_DRIVER | DXGI_SWAP_CHAIN_FLAG_DISPLAY_ONLY | DXGI_SWAP_CHAIN_FLAG_FRAME_LATENCY_WAITABLE_OBJECT \
		| DXGI_SWAP_CHAIN_FLAG_FOREGROUND_LAYER | DXGI_SWAP_CHAIN_FLAG_FULLSCREEN_VIDEO | DXGI_SWAP_CHAIN_FLAG_YUV_VIDEO \
		| DXGI_SWAP_CHAIN_FLAG_HW_PROTECTED | DXGI_SWAP_CHAIN_FLAG_ALLOW_TEARING \
		| DXGI_SWAP_CHAIN_FLAG_RESTRICTED_TO_ALL_HOLOGRAPHIC_DISPLAYS 

HRESULT wd::dxgi_factory::GetParent(const IID& riid, void** ppParent)
{
	return wrapped_interface->GetParent(riid, ppParent);
}

HRESULT wd::dxgi_factory::EnumAdapters1(UINT Adapter, IDXGIAdapter1** ppAdapter)
{
	return wrapped_interface->EnumAdapters1(Adapter, ppAdapter);
}

HRESULT wd::dxgi_factory::CreateSwapChainForComposition(IGraphicsUnknown* pDevice, const DXGI_SWAP_CHAIN_DESC1* pDesc,
	IDXGIOutput* pRestrictToOutput, IDXGISwapChain1** ppSwapChain)
{
	return wrapped_interface->CreateSwapChainForComposition(reinterpret_cast<IUnknown*>(pDevice), pDesc, pRestrictToOutput, ppSwapChain);
}

HRESULT wd::dxgi_factory::CreateSwapChainForHwnd(IGraphicsUnknown* pDevice, HWND hWnd,
	const DXGI_SWAP_CHAIN_DESC1* pDesc, const DXGI_SWAP_CHAIN_FULLSCREEN_DESC* pFullscreenDesc,
	IDXGIOutput* pRestrictToOutput, IDXGISwapChain1** ppSwapChain)
{
	return wrapped_interface->CreateSwapChainForHwnd(reinterpret_cast<IUnknown*>(pDevice), hWnd, pDesc, pFullscreenDesc, pRestrictToOutput, ppSwapChain);
}

HRESULT wd::dxgi_factory::CreateSwapChainForCoreWindow(IGraphicsUnknown* pDevice, IUnknown* pWindow,
	DXGI_SWAP_CHAIN_DESC1* pDesc, IDXGIOutput* pRestrictToOutput, IDXGISwapChain1** ppSwapChain)
{
	printf("[CreateSwapChainForCoreWindow] created CoreWindow SwapChain with flags: 0x%llX\n", pDesc->Flags);
	IDXGISwapChain1* swap = nullptr;
	HRESULT hr;
	pDesc->Flags &= DXGI_SWAPCHAIN_FLAG_MASK;
	//pDesc->Flags = 0x0;
	pDesc->Scaling = DXGI_SCALING_ASPECT_RATIO_STRETCH;

	IUnknown* pRealDevice = nullptr;
	hr = pDevice->QueryInterface(__uuidof(wdi::IGraphicsUnwrap), (void**)&pRealDevice);
	if (FAILED(hr))
	{
		printf("CRITICAL: dxgi_factory::CreateSwapChainForCoreWindow -> failed to unwrap device, this is a critical leak!\n");
		return hr;
	}

	if (pWindow == nullptr)
	{
		Microsoft::WRL::ComPtr<ABI::Windows::UI::Core::ICoreWindowStatic> coreWindowStatic;
		RoGetActivationFactory(Microsoft::WRL::Wrappers::HStringReference(RuntimeClass_Windows_UI_Core_CoreWindow).Get( ), IID_PPV_ARGS(&coreWindowStatic));

		Microsoft::WRL::ComPtr<ABI::Windows::UI::Core::ICoreWindow> coreWindow;
		coreWindowStatic->GetForCurrentThread(&coreWindow);

		pWindow = coreWindow.Get( );

		hr = wrapped_interface->CreateSwapChainForCoreWindow(pRealDevice, pWindow, pDesc, pRestrictToOutput, &swap);

		*ppSwapChain = reinterpret_cast<IDXGISwapChain1*>(new dxgi_swapchain(swap));
	}
	else
	{
		if (pLastSwapChain)
		{
			//pLastSwapChain->Release( );
			//pLastSwapChain = nullptr;

			//ppSwapChain = (IDXGISwapChain1**)0xDEADBEEFDEADBEEF;
			printf("[CreateSwapChainForCoreWindow] Workaround! Tried making a new swap chain when one already exists, so we're gonna re-use the old one 0x%llX\n", *pLastSwapChain);
			*ppSwapChain = pLastSwapChain;
			return S_OK;
		}
		ID3D11Device* D3DDevice = reinterpret_cast<ID3D11Device*>(pRealDevice);
		ID3D11DeviceContext* DeviceContext = nullptr;
		D3DDevice->GetImmediateContext(&DeviceContext);
		DeviceContext->ClearState();
		hr = wrapped_interface->CreateSwapChainForCoreWindow(pRealDevice, reinterpret_cast<CoreWindowWrapperX*>(pWindow)->m_realWindow, pDesc, pRestrictToOutput, &swap);
		printf("[CreateSwapChainForCoreWindow] Swap is at 0x%llX\n", *swap);
		IDXGISwapChain1* pNewSwapChain = reinterpret_cast<IDXGISwapChain1*>(new dxgi_swapchain(swap));
		printf("[CreateSwapChainForCoreWindow] created CoreWindow SwapChain at 0x%llX\n", *pNewSwapChain);
		*ppSwapChain = pNewSwapChain;
		pLastSwapChain = *ppSwapChain;
	}

	// TODO: init overlay

	if (FAILED(hr))
	{
		printf("[CreateSwapChainForCoreWindow] failed at 0x%llX !!!!!!!!\n", *ppSwapChain);
	}

	return hr;
}

HRESULT wd::dxgi_factory::GetSharedResourceAdapterLuid(HANDLE hResource, LUID* pLuid)
{
	return wrapped_interface->GetSharedResourceAdapterLuid(hResource, pLuid);
}

HRESULT wd::dxgi_factory::RegisterStereoStatusWindow(HWND WindowHandle, UINT wMsg, DWORD* pdwCookie)
{
	return wrapped_interface->RegisterStereoStatusWindow(WindowHandle, wMsg, pdwCookie);
}

HRESULT wd::dxgi_factory::RegisterStereoStatusEvent(HANDLE hEvent, DWORD* pdwCookie)
{
	return wrapped_interface->RegisterStereoStatusEvent(hEvent, pdwCookie);
}

void wd::dxgi_factory::UnregisterStereoStatus(DWORD dwCookie)
{
	wrapped_interface->UnregisterStereoStatus(dwCookie);
}

HRESULT wd::dxgi_factory::RegisterOcclusionStatusWindow(HWND WindowHandle, UINT wMsg, DWORD* pdwCookie)
{
	return wrapped_interface->RegisterOcclusionStatusWindow(WindowHandle, wMsg, pdwCookie);
}

HRESULT wd::dxgi_factory::RegisterOcclusionStatusEvent(HANDLE hEvent, DWORD* pdwCookie)
{
	return wrapped_interface->RegisterOcclusionStatusEvent(hEvent, pdwCookie);
}

void wd::dxgi_factory::UnregisterOcclusionStatus(DWORD dwCookie)
{
	return wrapped_interface->UnregisterOcclusionStatus(dwCookie);
}

BOOL wd::dxgi_factory::IsCurrent()
{
	return wrapped_interface->IsCurrent( );
}

BOOL wd::dxgi_factory::IsWindowedStereoEnabled()
{
	return wrapped_interface->IsWindowedStereoEnabled( );
}

HRESULT wd::dxgi_factory::EnumAdapters(UINT Adapter, wdi::IDXGIAdapter** ppAdapter)
{
	printf("WARN: dxgi_factory::EnumAdapters does not wrap IDXGIAdapter!!!\n");
	return wrapped_interface->EnumAdapters(Adapter, reinterpret_cast<IDXGIAdapter**>(ppAdapter));
}

HRESULT wd::dxgi_factory::MakeWindowAssociation(HWND WindowHandle, UINT Flags)
{
	return wrapped_interface->MakeWindowAssociation(WindowHandle, Flags);
}

HRESULT wd::dxgi_factory::GetWindowAssociation(HWND* pWindowHandle)
{
	return wrapped_interface->GetWindowAssociation(pWindowHandle);
}

HRESULT wd::dxgi_factory::CreateSwapChain(IGraphicsUnknown* pDevice, DXGI_SWAP_CHAIN_DESC* pDesc,
	IDXGISwapChain** ppSwapChain)
{
	return wrapped_interface->CreateSwapChain(reinterpret_cast<IUnknown*>(pDevice), pDesc, ppSwapChain);
}

HRESULT wd::dxgi_factory::CreateSoftwareAdapter(HMODULE Module, wdi::IDXGIAdapter** ppAdapter)
{
	printf("WARN: dxgi_factory::CreateSoftwareAdapter does not wrap IDXGIAdapter!!!\n");
	return wrapped_interface->CreateSoftwareAdapter(Module, reinterpret_cast<IDXGIAdapter**>(ppAdapter));
}
