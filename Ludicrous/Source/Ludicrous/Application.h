#pragma once

#include "Core.h"

namespace Ludicrous
{
	class LUDICROUS_API Application
	{
	public:
		Application() {}
		virtual ~Application() {}
	};

	Application* CreateApplication();
}
