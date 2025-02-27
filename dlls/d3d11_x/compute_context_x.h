#pragma once

#include "device_child_x.h"
#include <d3d11_1.h>
#include <d3d11_2.h>

namespace wdi
{
	#pragma region struct_defs
	typedef enum D3D11X_GPU_PIPELINED_EVENT : int32_t {
		D3D11X_GPU_PIPELINED_EVENT_STREAMOUT_FLUSH = 0x001f,
		D3D11X_GPU_PIPELINED_EVENT_FLUSH_AND_INV_CB_PIXEL_DATA = 0x0031,
		D3D11X_GPU_PIPELINED_EVENT_DB_CACHE_FLUSH_AND_INV = 0x002a,
		D3D11X_GPU_PIPELINED_EVENT_FLUSH_AND_INV_CB_META = 0x002e,
		D3D11X_GPU_PIPELINED_EVENT_FLUSH_AND_INV_DB_META = 0x002c,
		D3D11X_GPU_PIPELINED_EVENT_CS_PARTIAL_FLUSH = 0x0407,
		D3D11X_GPU_PIPELINED_EVENT_VS_PARTIAL_FLUSH = 0x040f,
		D3D11X_GPU_PIPELINED_EVENT_PS_PARTIAL_FLUSH = 0x0410,
		D3D11X_GPU_PIPELINED_EVENT_PFP_SYNC_ME = -2147483647,
	};

	typedef enum D3D11X_COMPUTE_CONTEXT_PRIORITY : int32_t {
		D3D11X_COMPUTE_CONTEXT_PRIORITY_LOWEST = 0x0000,
		D3D11X_COMPUTE_CONTEXT_PRIORITY_LOWER = 0x0002,
		D3D11X_COMPUTE_CONTEXT_PRIORITY_LOW = 0x0005,
		D3D11X_COMPUTE_CONTEXT_PRIORITY_MEDIUM = 0x0008,
		D3D11X_COMPUTE_CONTEXT_PRIORITY_HIGH = 0x000b,
		D3D11X_COMPUTE_CONTEXT_PRIORITY_HIGHER = 0x000d,
		D3D11X_COMPUTE_CONTEXT_PRIORITY_HIGHEST = 0x000f,
		D3D11X_COMPUTE_CONTEXT_PRIORITY_DEFAULT = 0x0005,
	};

	typedef enum _D3D11X_GDS_REGION_TYPE : int32_t {
		D3D11X_GDS_REGION_PS = 0x0000,
		D3D11X_GDS_REGION_CS = 0x0001,
	};
	struct D3D11X_COMPUTE_SHADER_LIMITS;
	#pragma endregion

	// compute contexts are created on boot of some games (e.g Halo 5) so this class is necessary to be created for whenever it's called via CreateComputeContextX
	D3DINTERFACE(ID3D11ComputeContextX, 17c3009b, d67d, 45a2, ad, b3, 15, d8, 3e, 79, a0, 31) : public ID3D11DeviceChild
	{

	public:

	virtual void (Dispatch)(uint32_t ThreadGroupCountX, uint32_t ThreadGroupCountY, uint32_t ThreadGroupCountZ) = 0;
	virtual void (DispatchIndirect)(ID3D11Buffer* ppBuffer, uint32_t ThreadGroupCountX) = 0;
	virtual void (CSSetShaderResources)(uint32_t ResCountX, uint32_t ResCountY, ID3D11ShaderResourceView** ppShaderResourceView) = 0;
	virtual void (CSSetUnorderedAccessViews)(uint32_t AccessCountX, uint32_t AccessCountY, ID3D11UnorderedAccessView** ppUnorderedAccessView, const uint32_t* pCount) = 0;
	virtual void (CSSetShader)(ID3D11ComputeShader* pComputeShader) = 0;
	virtual void (CSSetSamplers)(uint32_t SampleCountX, uint32_t SampleCountY, ID3D11SamplerState** ppSamplerState) = 0;
	virtual void (CSSetConstantBuffers)(uint32_t BufferCountX, uint32_t BufferCountY, ID3D11Buffer** ppBuffer) = 0;
	virtual void (CSSetConstantBuffers1)(uint32_t BufferCountX, uint32_t BufferCountY, ID3D11Buffer** ppBuffer, const uint32_t* pCountX, const uint32_t* pCountY) = 0;
	virtual void (CSSetPlacementConstantBuffer)(uint32_t PlacementBufferCountX, ID3D11Buffer* pBuffer, void* pVoid) = 0;
	virtual void (CSSetPlacementShaderResource)(uint32_t PlacementShaderCountX, ID3D11ShaderResourceView* pShaderResourceView, void* pVoid) = 0;
	virtual void (CSSetPlacementUnorderedAccessView)(uint32_t UnorderedAccessViewCountX, ID3D11UnorderedAccessView* pUnorderedAccessView, uint32_t UnorderedAccessViewCountY, void* pVoid) = 0;
	virtual void (CopyResource)(ID3D11Resource* pResourceX, ID3D11Resource* pResourceY, uint32_t ResourceCountX) = 0;
	virtual void (CopySubresourceRegion)(ID3D11Resource* pResourceX, uint32_t RegionCount1, uint32_t RegionCount2, uint32_t RegionCount3, uint32_t RegionCount4, ID3D11Resource* pResourceY, uint32_t RegionCount5, const D3D11_BOX* pBox, uint32_t RegionCount6) = 0;
	virtual void (ClearUnorderedAccessViewUint)(ID3D11UnorderedAccessView* pUnorderedAccessView, const uint32_t* pCount) = 0;
	virtual void (ClearUnorderedAccessViewFloat)(ID3D11UnorderedAccessView* pUnorderedAccessView, const float* pFloat) = 0;
	virtual uint64_t(InsertFence)(uint32_t FenceCount) = 0;
	virtual void (InsertWaitOnFence)(uint32_t FenceCount32, uint64_t FenceCount64) = 0;
	virtual int32_t(Flush)() = 0;
	virtual void (ClearState)() = 0;
	virtual void (CopyMemoryToMemory)(void* pVoidX, void* pVoidY, uint64_t MemoryCount) = 0;
	virtual void (FillMemoryWithValue)(void* pVoid, uint64_t Count64, uint32_t Count32) = 0;
	virtual void (FillResourceWithValue)(ID3D11Resource* pResource, uint32_t Count) = 0;
	virtual void (WriteTimestampToMemory)(void* pVoid) = 0;
	virtual void (WriteTimestampToBuffer)(ID3D11Buffer* pBuffer, uint32_t Count) = 0;
	virtual int32_t (PIXBeginEvent)(const wchar_t* pChar) = 0;
	virtual int32_t (PIXBeginEventEx)(const void* pVoid, uint32_t Count) = 0;
	virtual int32_t (PIXEndEvent)() = 0;
	virtual void (PIXSetMarker)(const wchar_t* pChat) = 0;
	virtual void (PIXSetMarkerEx)(const void* pVoid, uint32_t Count) = 0;
	virtual void (GpuSendPipelinedEvent)(D3D11X_GPU_PIPELINED_EVENT Event) = 0;
	virtual void (SetComputeShaderLimits)(const D3D11X_COMPUTE_SHADER_LIMITS* pShaderLimits) = 0;
	virtual void (FlushGpuCachesTopOfPipe)(uint32_t Count) = 0;
	virtual void (FlushGpuCachesBottomOfPipe)(uint32_t Count) = 0;
	virtual void (SetDispatchFlags)(uint32_t Count) = 0;
	virtual uint32_t (GetDispatchFlags)() = 0;
	virtual int32_t (SetPriority)(D3D11X_COMPUTE_CONTEXT_PRIORITY ContextPriority) = 0;
	virtual void (WriteValueBottomOfPipe)(void* pVoid, uint32_t Count) = 0;
	virtual void (InsertThreadTraceMarker)(uint32_t Count) = 0;
	virtual void (SetFastResources_Debug)(uint32_t* pCountX, uint32_t* pCountY) = 0;
	virtual void (BeginResourceBatch)(void* pVoid, uint32_t Count) = 0;
	virtual uint32_t (EndResourceBatch)(uint32_t* pCount) = 0;
	virtual void (SetFastResourcesFromBatch_Debug)(void* pVoid, uint32_t Count) = 0;
	virtual void (SetGDSRange)(_D3D11X_GDS_REGION_TYPE RegionType, uint32_t CountX, uint32_t CountY) = 0;
	virtual void (WriteGDS)(_D3D11X_GDS_REGION_TYPE RegionType, uint32_t CountX, uint32_t CountY, const uint32_t* pCountX, uint32_t CountZ) = 0;
	virtual void (ReadGDS)(_D3D11X_GDS_REGION_TYPE RegionType, uint32_t CountX, uint32_t CountY, uint32_t* pCountX, uint32_t CountZ) = 0;
	virtual void (InsertWaitOnMemory)(const void* pVoid, uint32_t CountX, D3D11_COMPARISON_FUNC ComparisonFunc, uint32_t CountY, uint32_t CountZ) = 0;
	virtual void (CSSetShaderUserData)(uint32_t CountX, uint32_t CountY, const uint32_t* pCountX) = 0;
	virtual void (WriteValueEndOfPipe64)(void* pVoid, uint64_t Count64, uint32_t Count32) = 0;
	virtual void (InsertWaitOnMemory64)(const void* pVoid, uint32_t Count32, D3D11_COMPARISON_FUNC ComparisonFunc, uint64_t Count64) = 0;
	virtual void (InsertWaitOnPresent)(uint32_t Count, ID3D11Resource* pResource) = 0;

	protected:



	private:



	};
}

namespace wd
{
	// Windurango child class of ID3D11ComputeContextX
	class compute_context_x : public wdi::ID3D11ComputeContextX
	{
		// @Patoke todo: make this access wdi::ID3D11Device instead, this is a temporary fix
		virtual void STDMETHODCALLTYPE GetDevice(::ID3D11Device** ppDevice) override = 0;
		virtual HRESULT STDMETHODCALLTYPE GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData) override { throw std::logic_error("Not implemented"); };
		virtual HRESULT STDMETHODCALLTYPE SetPrivateData(REFGUID guid, UINT DataSize, const void* pData) override { throw std::logic_error("Not implemented"); };
		virtual HRESULT STDMETHODCALLTYPE SetPrivateDataInterface(REFGUID guid, const IUnknown* pData) override { throw std::logic_error("Not implemented"); };
		virtual HRESULT STDMETHODCALLTYPE SetPrivateDataInterfaceGraphics(REFGUID guid, const IGraphicsUnknown* pData) override { throw std::logic_error("Not implemented"); };
		virtual HRESULT STDMETHODCALLTYPE SetName(LPCWSTR pName) override { throw std::logic_error("Not implemented"); };

	public:

		void Dispatch(uint32_t ThreadGroupCountX, uint32_t ThreadGroupCountY, uint32_t ThreadGroupCountZ) override;
		void DispatchIndirect(ID3D11Buffer* ppBuffer, uint32_t ThreadGroupCountX) override;
		void CSSetShaderResources(uint32_t ResCountX, uint32_t ResCountY, ID3D11ShaderResourceView** ppShaderResourceView) override;
		void CSSetUnorderedAccessViews(uint32_t AccessCountX, uint32_t AccessCountY, ID3D11UnorderedAccessView** ppUnorderedAccessView, const uint32_t* pCount) override;
		void CSSetShader(ID3D11ComputeShader* pComputeShader) override;
		void CSSetSamplers(uint32_t SampleCountX, uint32_t SampleCountY, ID3D11SamplerState** ppSamplerState) override;
		void CSSetConstantBuffers(uint32_t BufferCountX, uint32_t BufferCountY, ID3D11Buffer** ppBuffer) override;
		void CSSetConstantBuffers1(uint32_t BufferCountX, uint32_t BufferCountY, ID3D11Buffer** ppBuffer, const uint32_t* pCountX, const uint32_t* pCountY) override;
		void CSSetPlacementConstantBuffer(uint32_t PlacementBufferCountX, ID3D11Buffer* pBuffer, void* pVoid) override;
		void CSSetPlacementShaderResource(uint32_t PlacementShaderCountX, ID3D11ShaderResourceView* pShaderResourceView, void* pVoid) override;
		void CSSetPlacementUnorderedAccessView(uint32_t UnorderedAccessViewCountX, ID3D11UnorderedAccessView* pUnorderedAccessView, uint32_t UnorderedAccessViewCountY, void* pVoid) override;
		void CopyResource(ID3D11Resource* pResourceX, ID3D11Resource* pResourceY, uint32_t ResourceCountX) override;
		void CopySubresourceRegion(ID3D11Resource* pResourceX, uint32_t RegionCount1, uint32_t RegionCount2, uint32_t RegionCount3, uint32_t RegionCount4, ID3D11Resource* pResourceY, uint32_t RegionCount5, const D3D11_BOX* pBox, uint32_t RegionCount6) override;
		void ClearUnorderedAccessViewUint(ID3D11UnorderedAccessView* pUnorderedAccessView, const uint32_t* pCount) override;
		void ClearUnorderedAccessViewFloat(ID3D11UnorderedAccessView* pUnorderedAccessView, const float* pFloat) override;
		uint64_t InsertFence(uint32_t FenceCount) override;
		void InsertWaitOnFence(uint32_t FenceCount32, uint64_t FenceCount64) override;
		int32_t Flush() override;
		void ClearState() override;
		void CopyMemoryToMemory(void* pVoidX, void* pVoidY, uint64_t MemoryCount) override;
		void FillMemoryWithValue(void* pVoid, uint64_t Count64, uint32_t Count32) override;
		void FillResourceWithValue(ID3D11Resource* pResource, uint32_t Count) override;
		void WriteTimestampToMemory(void* pVoid) override;
		void WriteTimestampToBuffer(ID3D11Buffer* pBuffer, uint32_t Count) override;
		int32_t PIXBeginEvent(const wchar_t* pChar) override;
		int32_t PIXBeginEventEx(const void* pVoid, uint32_t Count) override;
		int32_t PIXEndEvent() override;
		void PIXSetMarker(const wchar_t* pChat) override;
		void PIXSetMarkerEx(const void* pVoid, uint32_t Count) override;
		void GpuSendPipelinedEvent(D3D11X_GPU_PIPELINED_EVENT Event) override;
		void SetComputeShaderLimits(const D3D11X_COMPUTE_SHADER_LIMITS* pShaderLimits) override;
		void FlushGpuCachesTopOfPipe(uint32_t Count) override;
		void FlushGpuCachesBottomOfPipe(uint32_t Count) override;
		void SetDispatchFlags(uint32_t Count) override;
		uint32_t GetDispatchFlags() override;
		int32_t SetPriority(D3D11X_COMPUTE_CONTEXT_PRIORITY ContextPriority) override;
		void WriteValueBottomOfPipe(void* pVoid, uint32_t Count) override;
		void InsertThreadTraceMarker(uint32_t Count) override;
		void SetFastResources_Debug(uint32_t* pCountX, uint32_t* pCountY) override;
		void BeginResourceBatch(void* pVoid, uint32_t Count) override;
		uint32_t EndResourceBatch(uint32_t* pCount) override;
		void SetFastResourcesFromBatch_Debug(void* pVoid, uint32_t Count) override;
		void SetGDSRange(_D3D11X_GDS_REGION_TYPE RegionType, uint32_t CountX, uint32_t CountY) override;
		void WriteGDS(_D3D11X_GDS_REGION_TYPE RegionType, uint32_t CountX, uint32_t CountY, const uint32_t* pCountX, uint32_t CountZ) override;
		void ReadGDS(_D3D11X_GDS_REGION_TYPE RegionType, uint32_t CountX, uint32_t CountY, uint32_t* pCountX, uint32_t CountZ) override;
		void InsertWaitOnMemory(const void* pVoid, uint32_t CountX, D3D11_COMPARISON_FUNC ComparisonFunc, uint32_t CountY, uint32_t CountZ) override;
		void CSSetShaderUserData(uint32_t CountX, uint32_t CountY, const uint32_t* pCountX) override;
		void WriteValueEndOfPipe64(void* pVoid, uint64_t Count64, uint32_t Count32) override;
		void InsertWaitOnMemory64(const void* pVoid, uint32_t Count32, D3D11_COMPARISON_FUNC ComparisonFunc, uint64_t Count64) override;
		void InsertWaitOnPresent(uint32_t Count, ID3D11Resource* pResource) override;
	};
}