#pragma once

#include "compute_context_x.h"

namespace wd
{
	class bundle_context_x : compute_context_x
	{
		// @Patoke todo: make this access wdi::ID3D11Device instead, this is a temporary fix
		virtual void STDMETHODCALLTYPE GetDevice(::ID3D11Device** ppDevice) override {};
		virtual HRESULT STDMETHODCALLTYPE GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData) override { throw std::logic_error("Not implemented"); };
		virtual HRESULT STDMETHODCALLTYPE SetPrivateData(REFGUID guid, UINT DataSize, const void* pData) override { throw std::logic_error("Not implemented"); };
		virtual HRESULT STDMETHODCALLTYPE SetPrivateDataInterface(REFGUID guid, const IUnknown* pData) override { throw std::logic_error("Not implemented"); };
		virtual HRESULT STDMETHODCALLTYPE SetPrivateDataInterfaceGraphics(REFGUID guid, const IGraphicsUnknown* pData) override { throw std::logic_error("Not implemented"); };
		virtual HRESULT STDMETHODCALLTYPE SetName(LPCWSTR pName) override { throw std::logic_error("Not implemented"); };

	public:



	};
}