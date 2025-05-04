#include <Doom.h>

class Sandbox : public Doom::Application
{
public:
	Sandbox()
	{

	}
	~Sandbox()
	{

	}
};


Doom::Application* Doom::CreateApplication() 
{
	return new Sandbox();
}