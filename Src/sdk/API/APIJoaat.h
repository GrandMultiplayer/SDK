#ifndef __APIJOAAT_H__
#define __APIJOAAT_H__
#pragma once

#include "../api.h"
#include <stdint.h>

namespace API
{
	namespace API_Joaat
	{
		DLL_PUBLIC_I_C uint32_t Jooat(const char * string);
	}
}

#endif // !__API_JOAAT_H__