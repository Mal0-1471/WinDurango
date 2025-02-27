#include "compute_context_x.h"

void wd::compute_context_x::Dispatch(uint32_t ThreadGroupCountX, uint32_t ThreadGroupCountY, uint32_t ThreadGroupCountZ)
{
	throw std::logic_error("Not implemented");
}

void wd::compute_context_x::DispatchIndirect(ID3D11Buffer* ppBuffer, uint32_t ThreadGroupCountX)
{
	throw std::logic_error("Not implemented");
}

void wd::compute_context_x::CSSetShaderResources(uint32_t ResCountX, uint32_t ResCountY, ID3D11ShaderResourceView** ppShaderResourceView)
{
	throw std::logic_error("Not implemented");
}

void wd::compute_context_x::CSSetUnorderedAccessViews(uint32_t AccessCountX, uint32_t AccessCountY, ID3D11UnorderedAccessView** ppUnorderedAccessView, const uint32_t* pCount)
{
	throw std::logic_error("Not implemented");
}

void wd::compute_context_x::CSSetShader(ID3D11ComputeShader* pComputeShader)
{
	throw std::logic_error("Not implemented");
}

void wd::compute_context_x::CSSetSamplers(uint32_t SampleCountX, uint32_t SampleCountY, ID3D11SamplerState** ppSamplerState)
{
	throw std::logic_error("Not implemented");
}

void wd::compute_context_x::CSSetConstantBuffers(uint32_t BufferCountX, uint32_t BufferCountY, ID3D11Buffer** ppBuffer)
{
	throw std::logic_error("Not implemented");
}

void wd::compute_context_x::CSSetConstantBuffers1(uint32_t BufferCountX, uint32_t BufferCountY, ID3D11Buffer** ppBuffer, const uint32_t* pCountX, const uint32_t* pCountY)
{
	throw std::logic_error("Not implemented");
}

void wd::compute_context_x::CSSetPlacementConstantBuffer(uint32_t PlacementBufferCountX, ID3D11Buffer* pBuffer, void* pVoid)
{
	throw std::logic_error("Not implemented");
}

void wd::compute_context_x::CSSetPlacementShaderResource(uint32_t PlacementShaderCountX, ID3D11ShaderResourceView* pShaderResourceView, void* pVoid)
{
	throw std::logic_error("Not implemented");
}

void wd::compute_context_x::CSSetPlacementUnorderedAccessView(uint32_t UnorderedAccessViewCountX, ID3D11UnorderedAccessView* pUnorderedAccessView, uint32_t UnorderedAccessViewCountY, void* pVoid)
{
	throw std::logic_error("Not implemented");
}

void wd::compute_context_x::CopyResource(ID3D11Resource* pResourceX, ID3D11Resource* pResourceY, uint32_t ResourceCountX)
{
	throw std::logic_error("Not implemented");
}

void wd::compute_context_x::CopySubresourceRegion(ID3D11Resource* pResourceX, uint32_t RegionCount1, uint32_t RegionCount2, uint32_t RegionCount3, uint32_t RegionCount4, ID3D11Resource* pResourceY, uint32_t RegionCount5, const D3D11_BOX* pBox, uint32_t RegionCount6)
{
	throw std::logic_error("Not implemented");
}

void wd::compute_context_x::ClearUnorderedAccessViewUint(ID3D11UnorderedAccessView* pUnorderedAccessView, const uint32_t* pCount)
{
	throw std::logic_error("Not implemented");
}

void wd::compute_context_x::ClearUnorderedAccessViewFloat(ID3D11UnorderedAccessView* pUnorderedAccessView, const float* pFloat)
{
	throw std::logic_error("Not implemented");
}

uint64_t wd::compute_context_x::InsertFence(uint32_t FenceCount)
{
	throw std::logic_error("Not implemented");
	return 0;
}

void wd::compute_context_x::InsertWaitOnFence(uint32_t FenceCount32, uint64_t FenceCount64)
{
	throw std::logic_error("Not implemented");
}

int32_t wd::compute_context_x::Flush( )
{
	throw std::logic_error("Not implemented");
	return 0;
}

void wd::compute_context_x::ClearState( )
{
	throw std::logic_error("Not implemented");
}

void wd::compute_context_x::CopyMemoryToMemory(void* pVoidX, void* pVoidY, uint64_t MemoryCount)
{
	throw std::logic_error("Not implemented");
}

void wd::compute_context_x::FillMemoryWithValue(void* pVoid, uint64_t Count64, uint32_t Count32)
{
	throw std::logic_error("Not implemented");
}

void wd::compute_context_x::FillResourceWithValue(ID3D11Resource* pResource, uint32_t Count)
{
	throw std::logic_error("Not implemented");
}

void wd::compute_context_x::WriteTimestampToMemory(void* pVoid)
{
	throw std::logic_error("Not implemented");
}

void wd::compute_context_x::WriteTimestampToBuffer(ID3D11Buffer* pBuffer, uint32_t Count)
{
	throw std::logic_error("Not implemented");
}

int32_t wd::compute_context_x::PIXBeginEvent(const wchar_t* pChar)
{
	throw std::logic_error("Not implemented");
	return 0;
}

int32_t wd::compute_context_x::PIXBeginEventEx(const void* pVoid, uint32_t Count)
{
	throw std::logic_error("Not implemented");
	return 0;
}

int32_t wd::compute_context_x::PIXEndEvent( )
{
	throw std::logic_error("Not implemented");
	return 0;
}

void wd::compute_context_x::PIXSetMarker(const wchar_t* pChat)
{
	throw std::logic_error("Not implemented");
}

void wd::compute_context_x::PIXSetMarkerEx(const void* pVoid, uint32_t Count)
{
	throw std::logic_error("Not implemented");
}

void wd::compute_context_x::GpuSendPipelinedEvent(wdi::D3D11X_GPU_PIPELINED_EVENT Event)
{
	throw std::logic_error("Not implemented");
}

void wd::compute_context_x::SetComputeShaderLimits(const wdi::D3D11X_COMPUTE_SHADER_LIMITS* pShaderLimits)
{
	throw std::logic_error("Not implemented");
}

void wd::compute_context_x::FlushGpuCachesTopOfPipe(uint32_t Count)
{
	//throw std::logic_error("Not implemented"); // UNCOMMENT ME LATER! NEEDS IMPLEMENTATION!!!
}

void wd::compute_context_x::FlushGpuCachesBottomOfPipe(uint32_t Count)
{
	throw std::logic_error("Not implemented");
}

void wd::compute_context_x::SetDispatchFlags(uint32_t Count)
{
	throw std::logic_error("Not implemented");
}

uint32_t wd::compute_context_x::GetDispatchFlags( )
{
	//throw std::logic_error("Not implemented"); // UNCOMMENT ME LATER! NEEDS IMPLEMENTATION!!!
	return 0;
}

int32_t wd::compute_context_x::SetPriority(wdi::D3D11X_COMPUTE_CONTEXT_PRIORITY ContextPriority)
{
	throw std::logic_error("Not implemented");
	return 0;
}

void wd::compute_context_x::WriteValueBottomOfPipe(void* pVoid, uint32_t Count)
{
	throw std::logic_error("Not implemented");
}

void wd::compute_context_x::InsertThreadTraceMarker(uint32_t Count)
{
	throw std::logic_error("Not implemented");
}

void wd::compute_context_x::SetFastResources_Debug(uint32_t* pCountX, uint32_t* pCountY)
{
	throw std::logic_error("Not implemented");
}

void wd::compute_context_x::BeginResourceBatch(void* pVoid, uint32_t Count)
{
	throw std::logic_error("Not implemented");
}

uint32_t wd::compute_context_x::EndResourceBatch(uint32_t* pCount)
{
	throw std::logic_error("Not implemented");
	return 0;
}

void wd::compute_context_x::SetFastResourcesFromBatch_Debug(void* pVoid, uint32_t Count)
{
	throw std::logic_error("Not implemented");
}

void wd::compute_context_x::SetGDSRange(wdi::_D3D11X_GDS_REGION_TYPE RegionType, uint32_t CountX, uint32_t CountY)
{
	throw std::logic_error("Not implemented");
}

void wd::compute_context_x::WriteGDS(wdi::_D3D11X_GDS_REGION_TYPE RegionType, uint32_t CountX, uint32_t CountY, const uint32_t* pCountX, uint32_t CountZ)
{
	//throw std::logic_error("Not implemented"); // UNCOMMENT ME LATER! NEEDS IMPLEMENTATION!!!
}

void wd::compute_context_x::ReadGDS(wdi::_D3D11X_GDS_REGION_TYPE RegionType, uint32_t CountX, uint32_t CountY, uint32_t* pCountX, uint32_t CountZ)
{
	throw std::logic_error("Not implemented");
}

void wd::compute_context_x::InsertWaitOnMemory(const void* pVoid, uint32_t CountX, D3D11_COMPARISON_FUNC ComparisonFunc, uint32_t CountY, uint32_t CountZ)
{
	throw std::logic_error("Not implemented");
}

void wd::compute_context_x::CSSetShaderUserData(uint32_t CountX, uint32_t CountY, const uint32_t* pCountX)
{
	throw std::logic_error("Not implemented");
}

void wd::compute_context_x::WriteValueEndOfPipe64(void* pVoid, uint64_t Count64, uint32_t Count32)
{
	throw std::logic_error("Not implemented");
}

void wd::compute_context_x::InsertWaitOnMemory64(const void* pVoid, uint32_t Count32, D3D11_COMPARISON_FUNC ComparisonFunc, uint64_t Count64)
{
	throw std::logic_error("Not implemented");
}

void wd::compute_context_x::InsertWaitOnPresent(uint32_t Count, ID3D11Resource* pResource)
{
	throw std::logic_error("Not implemented");
}
