#include <Kompass.h>

class Sandbox : public Kompass::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}


};

Kompass::Application* Kompass::CreateApplication()
{
	return new Sandbox();
}