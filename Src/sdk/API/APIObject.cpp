#include "APIObject.h"

namespace API
{
	namespace Object
	{
		Objects::Entity Create(const uint32_t model, const CVector3 position, const CVector3 rotation, const bool dynamic)
		{
			return CreateObject(model, position, rotation, dynamic);
		}
	}
}