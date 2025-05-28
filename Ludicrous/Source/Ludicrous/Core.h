#pragma once

#ifdef LC_PLATFORM_WINDOWS
	#ifdef LC_BUILD_DLL
		#define LUDICROUS_API __declspec(dllexport)
	#else
		#define LUDICROUS_API __declspec(dllimport)
	#endif
#else
	#error Ludicrous only supports Windows!
#endif