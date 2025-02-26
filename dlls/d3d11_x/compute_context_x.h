#pragma once

#include "device_child_x.h"

namespace wdi
{
	// compute contexts are created on boot of some games (e.g Halo 5) so this class is necessary to be created for whenever it's called via CreateComputeContextX
	D3DINTERFACE(ID3D11ComputeContextX, 17c3009b, d67d, 45a2, ad, b3, 15, d8, 3e, 79, a0, 31) : public ID3D11DeviceChild
	{

		// @Patoke todo: make this access wdi::ID3D11Device instead, this is a temporary fix
		virtual void STDMETHODCALLTYPE GetDevice(::ID3D11Device** ppDevice) {};
		virtual HRESULT STDMETHODCALLTYPE GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData) { throw std::logic_error("Not implemented"); };
		virtual HRESULT STDMETHODCALLTYPE SetPrivateData(REFGUID guid, UINT DataSize, const void* pData) { throw std::logic_error("Not implemented"); };
		virtual HRESULT STDMETHODCALLTYPE SetPrivateDataInterface(REFGUID guid, const IUnknown* pData) { throw std::logic_error("Not implemented"); };
		virtual HRESULT STDMETHODCALLTYPE SetPrivateDataInterfaceGraphics(REFGUID guid, const IGraphicsUnknown* pData) { throw std::logic_error("Not implemented"); };
		virtual HRESULT STDMETHODCALLTYPE SetName(LPCWSTR pName) { throw std::logic_error("Not implemented"); };

	public:



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
		virtual void STDMETHODCALLTYPE GetDevice(::ID3D11Device** ppDevice) {};
		virtual HRESULT STDMETHODCALLTYPE GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData) { throw std::logic_error("Not implemented"); };
		virtual HRESULT STDMETHODCALLTYPE SetPrivateData(REFGUID guid, UINT DataSize, const void* pData) { throw std::logic_error("Not implemented"); };
		virtual HRESULT STDMETHODCALLTYPE SetPrivateDataInterface(REFGUID guid, const IUnknown* pData) { throw std::logic_error("Not implemented"); };
		virtual HRESULT STDMETHODCALLTYPE SetPrivateDataInterfaceGraphics(REFGUID guid, const IGraphicsUnknown* pData) { throw std::logic_error("Not implemented"); };
		virtual HRESULT STDMETHODCALLTYPE SetName(LPCWSTR pName) { throw std::logic_error("Not implemented"); };
	};
}