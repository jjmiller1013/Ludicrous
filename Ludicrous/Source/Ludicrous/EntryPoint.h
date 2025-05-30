#pragma once

#include "Application.h"

#ifdef LE_PLATFORM_WINDOWS

extern Ludicrous::Application* Ludicrous::CreateApplication();

int main(int argc, char** argv)
{
	Ludicrous::Log::Init();
	LE_CORE_TRACE("Initialized core logger");
	LE_INFO("Initialized client logger");

	Ludicrous::Application* App = Ludicrous::CreateApplication();
	delete App;
}

#endif