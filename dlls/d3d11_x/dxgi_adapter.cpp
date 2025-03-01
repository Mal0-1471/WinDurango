#include "dxgi_adapter.h"
#include "dxgi_factory.h"

HRESULT wd::dxgi_adapter::GetParent(const IID& riid, void** ppParent)
{
    printf("[GetParent] Was called!!!!!\n");
    if (riid == __uuidof(IDXGIFactory) ||
		riid == __uuidof(IDXGIFactory1) ||
		riid == __uuidof(IDXGIFactory2))
    {
        IDXGIFactory2* factory = nullptr;
        HRESULT hr = wrapped_interface->GetParent(IID_PPV_ARGS(&factory));
        *ppParent = new dxgi_factory(factory);
        this->AddRef( );
        return hr;
    }

    TRACE_INTERFACE_NOT_HANDLED("dxgi_adapter");
    *ppParent = nullptr;
    return E_NOINTERFACE;
}

HRESULT wd::dxgi_adapter::EnumOutputs(UINT Output, IDXGIOutput** ppOutput)
{
    printf("[EnumOutputs] Was called!!!!!\n");
	return wrapped_interface->EnumOutputs(Output, ppOutput);
}

HRESULT wd::dxgi_adapter::GetDesc(DXGI_ADAPTER_DESC* pDesc)
{
    printf("[GetDesc] Was called!!!!!\n");
	return wrapped_interface->GetDesc(pDesc);
}

HRESULT wd::dxgi_adapter::CheckInterfaceSupport(const GUID& InterfaceName, LARGE_INTEGER* pUMDVersion)
{
	printf("WARN: dxgi_adapter::CheckInterfaceSupport is likely to fail due no support for d3d11.x!!!\n");
	return wrapped_interface->CheckInterfaceSupport(InterfaceName, pUMDVersion);
}
