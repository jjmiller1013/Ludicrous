#pragma once

#include "Application.h"

#ifdef LC_PLATFORM_WINDOWS

extern Ludicrous::Application* Ludicrous::CreateApplication();

int main(int argc, char** argv)
{
	Ludicrous::Application* App = Ludicrous::CreateApplication();
	delete App;
}

#endif