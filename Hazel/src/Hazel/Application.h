#pragma once

#include "Core.h"
#include "Events/Event.h"
#include "Windows.h"

namespace Hazel
{
	class HAZEL_API Application  // NOLINT(cppcoreguidelines-special-member-functions)
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	private:
		std::unique_ptr<Window> m_Window;
		bool m_Running = true;
	};

	// To be defined in CLIENT
	Application* CreateApplication();

}
