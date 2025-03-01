#include "dxgi_swapchain.h"

#include "resource.hpp"

HRESULT wd::dxgi_swapchain::QueryInterface(const IID& riid, void** ppvObject)
{
	printf("[QueryInterface] was called\n");
	if (riid == __uuidof(wdi::IDXGISwapChain1))
	{
		*ppvObject = this;
		AddRef( );
		return S_OK;
	}

	if (riid == __uuidof(wdi::IGraphicsUnwrap))
	{
		*ppvObject = wrapped_interface;
		return S_OK;
	}

	TRACE_INTERFACE_NOT_HANDLED("dxgi_swapchain");
	*ppvObject = nullptr;
	return E_NOINTERFACE;
}

HRESULT wd::dxgi_swapchain::GetParent(const IID& riid, void** ppParent)
{
	printf("[GetParent] was called\n");
	return wrapped_interface->GetParent(riid, ppParent);
}

HRESULT wd::dxgi_swapchain::GetDevice(const IID& riid, void** ppDevice)
{
	printf("[GetDevice] was called\n");
	return wrapped_interface->GetDevice(riid, ppDevice);
}

HRESULT wd::dxgi_swapchain::Present(UINT SyncInterval, UINT Flags)
{
	printf("[Present] was called\n");
	return wrapped_interface->Present(SyncInterval, Flags);
}

HRESULT wd::dxgi_swapchain::GetBuffer(UINT Buffer, const IID& riid, void** ppSurface)
{
	printf("[GetBuffer] was called\n");
	bool incRef = false;

	if (riid == __uuidof(ID3D11Texture1D))
	{
		ID3D11Texture1D* texture1d = nullptr;
		HRESULT hr = wrapped_interface->GetBuffer(Buffer, IID_PPV_ARGS(&texture1d));
		*ppSurface = new texture_1d(texture1d);
		incRef = true;
	}
	else if (riid == __uuidof(ID3D11Texture2D))
	{
		ID3D11Texture2D* texture2d = nullptr;
		HRESULT hr = wrapped_interface->GetBuffer(Buffer, IID_PPV_ARGS(&texture2d));
		*ppSurface = new texture_2d(texture2d);
		incRef = true;
	}
	else if (riid == __uuidof(ID3D11Texture3D))
	{
		ID3D11Texture3D* texture3d = nullptr;
		HRESULT hr = wrapped_interface->GetBuffer(Buffer, IID_PPV_ARGS(&texture3d));
		*ppSurface = new texture_3d(texture3d);
		incRef = true;
	}

	if (incRef)
	{
		AddRef( );
		return S_OK;
	}

	TRACE_INTERFACE_NOT_HANDLED("dxgi_swapchain - GetBuffer");
	*ppSurface = nullptr;
	return E_NOINTERFACE;
}

HRESULT wd::dxgi_swapchain::SetFullscreenState(BOOL Fullscreen, IDXGIOutput* pTarget)
{
	printf("[SetFullscreenState] was called\n");
	return wrapped_interface->SetFullscreenState(Fullscreen, pTarget);
}

HRESULT wd::dxgi_swapchain::GetFullscreenState(BOOL* pFullscreen, IDXGIOutput** ppTarget)
{
	printf("[GetFullscreenState] was called\n");
	return wrapped_interface->GetFullscreenState(pFullscreen, ppTarget);
}

HRESULT wd::dxgi_swapchain::GetDesc(DXGI_SWAP_CHAIN_DESC* pDesc)
{
	printf("[GetDesc] was called\n");
	return wrapped_interface->GetDesc(pDesc);
}

HRESULT wd::dxgi_swapchain::ResizeBuffers(UINT BufferCount, UINT Width, UINT Height, DXGI_FORMAT NewFormat,
	UINT SwapChainFlags)
{
	printf("[ResizeBuffers] was called\n");
	return wrapped_interface->ResizeBuffers(BufferCount, Width, Height, NewFormat, SwapChainFlags);
}

HRESULT wd::dxgi_swapchain::ResizeTarget(const DXGI_MODE_DESC* pNewTargetParameters)
{
	printf("[ResizeTarget] was called\n");
	return wrapped_interface->ResizeTarget(pNewTargetParameters);
}

HRESULT wd::dxgi_swapchain::GetContainingOutput(IDXGIOutput** ppOutput)
{
	printf("[GetContainingOutput] was called\n");
	return wrapped_interface->GetContainingOutput(ppOutput);
}

HRESULT wd::dxgi_swapchain::GetFrameStatistics(DXGI_FRAME_STATISTICS* pStats)
{
	printf("[GetFrameStatistics] was called\n");
	return wrapped_interface->GetFrameStatistics(pStats);
}

HRESULT wd::dxgi_swapchain::GetLastPresentCount(UINT* pLastPresentCount)
{
	printf("[GetLastPresentCount] was called\n");
	return wrapped_interface->GetLastPresentCount(pLastPresentCount);
}

HRESULT wd::dxgi_swapchain::GetDesc1(DXGI_SWAP_CHAIN_DESC1* pDesc)
{
	printf("[GetDesc1] was called\n");
	return wrapped_interface->GetDesc1(pDesc);
}

HRESULT wd::dxgi_swapchain::GetFullscreenDesc(DXGI_SWAP_CHAIN_FULLSCREEN_DESC* pDesc)
{
	printf("[GetFullscreenDesc] was called\n");
	return wrapped_interface->GetFullscreenDesc(pDesc);
}

HRESULT wd::dxgi_swapchain::GetHwnd(HWND* pHwnd)
{
	printf("[GetHwnd] was called\n");
	return wrapped_interface->GetHwnd(pHwnd);
}

HRESULT wd::dxgi_swapchain::GetCoreWindow(const IID& refiid, void** ppUnk)
{
	printf("[GetCoreWindow] was called\n");
	return wrapped_interface->GetCoreWindow(refiid, ppUnk);
}

HRESULT wd::dxgi_swapchain::Present1(UINT SyncInterval, UINT PresentFlags,
	const DXGI_PRESENT_PARAMETERS* pPresentParameters)
{
	printf("[Present1] was called\n");
	return wrapped_interface->Present1(SyncInterval, PresentFlags, pPresentParameters);
}

BOOL wd::dxgi_swapchain::IsTemporaryMonoSupported()
{
	printf("[IsTemporaryMonoSupported] was called\n");
	return wrapped_interface->IsTemporaryMonoSupported( );
}

HRESULT wd::dxgi_swapchain::GetRestrictToOutput(IDXGIOutput** ppRestrictToOutput)
{
	printf("[GetRestrictToOutput] was called\n");
	return wrapped_interface->GetRestrictToOutput(ppRestrictToOutput);
}

HRESULT wd::dxgi_swapchain::SetBackgroundColor(const DXGI_RGBA* pColor)
{
	printf("[SetBackgroundColor] was called\n");
	return wrapped_interface->SetBackgroundColor(pColor);
}

HRESULT wd::dxgi_swapchain::GetBackgroundColor(DXGI_RGBA* pColor)
{
	printf("[GetBackgroundColor] was called\n");
	return wrapped_interface->GetBackgroundColor(pColor);
}

HRESULT wd::dxgi_swapchain::SetRotation(DXGI_MODE_ROTATION Rotation)
{
	printf("[SetRotation] was called\n");
	return wrapped_interface->SetRotation(Rotation);
}

HRESULT wd::dxgi_swapchain::GetRotation(DXGI_MODE_ROTATION* pRotation)
{
	printf("[GetRotation] was called\n");
	return wrapped_interface->GetRotation(pRotation);
}
