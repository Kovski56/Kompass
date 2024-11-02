#pragma once

#include "Core.h"

namespace Kompass {

	class KOMPASS_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in CLIENT
	Application* CreateApplication();

}
