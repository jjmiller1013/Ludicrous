#include "Ludicrous.h"

class Sandbox : public Ludicrous::Application
{
public:
	Sandbox() {}
	~Sandbox() {}
};

Ludicrous::Application* Ludicrous::CreateApplication()
{
	return new Sandbox();
}