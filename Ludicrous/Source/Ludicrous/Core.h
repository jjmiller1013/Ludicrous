#pragma once

#include <memory>

#ifdef LE_PLATFORM_WINDOWS
	#ifdef LE_BUILD_DLL
		#define LUDICROUS_API __declspec(dllexport)
	#else
		#define LUDICROUS_API __declspec(dllimport)
	#endif
#else
	#error Ludicrous only supports Windows!
#endif