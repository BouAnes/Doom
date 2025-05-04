#pragma once

#include "Core.h"

namespace Doom {
	class DOOM_API Application
	{
	public:
		Application();
	    virtual ~Application();

	    void Run();

	};
	// to be defined in client

	Application* CreateApplication();
}

