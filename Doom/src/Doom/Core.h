#pragma once

#ifdef DM_PLATFORM_WINDOWS
	#ifdef DM_BUILD_DLL
		#define DOOM_API __declspec(dllexport)
	#else
		#define DOOM_API __declspec(dllimport)
	#endif
#else
	#error Doom only support windows
#endif