#pragma once

#ifdef KP_PLATFORM_WINDOWS

extern Kompass::Application* Kompass::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Kompass::CreateApplication();
	app->Run();
	delete app;
}

#endif