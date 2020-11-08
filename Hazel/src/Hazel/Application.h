#pragma once

#include "Core.h"

namespace Hazel
{
	class HAZEL_API Application  // NOLINT(cppcoreguidelines-special-member-functions)
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in CLIENT
	Application* CreateApplication();

}
