#pragma once

#include "device_child_x.h"

namespace wdi
{
	// compute contexts are created on boot of some games (e.g Halo 5) so this class is necessary to be created for whenever it's called via CreateComputeContextX
	D3DINTERFACE(ID3D11ComputeContextX, 17C3009Bh, 0D67Dh, 45A2h, 0ADh, 0B3h, 15h, 0D8h, 3Eh, 79h, 0A0h, 31h) : public ID3D11DeviceChild
	{

	public:



	protected:



	private:



	};
}

namespace wd
{
	// Windurango child class of ComputeContextX
	class compute_context_x : public wdi::ID3D11ComputeContextX
	{

	};
}