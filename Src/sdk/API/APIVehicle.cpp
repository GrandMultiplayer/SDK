#include "APIVehicle.h"

namespace API
{
	namespace Vehicle
	{
		Objects::Entity Create(const uint32_t model, const CVector3 position, const CVector3 rotation)
		{
			return CreateVehicle(model, position, rotation);
		}
	}
}