#pragma once

#include "Core.h"
#include "Events/Event.h"
#include "Windows.h"

namespace Hazel
{
	class WindowCloseEvent;

	class HAZEL_API Application  // NOLINT(cppcoreguidelines-special-member-functions)
	{
	public:
		Application();
		virtual ~Application();

		void Run();

		void OnEvent(Event& e);
	private:
		bool OnWindowClosed(WindowCloseEvent& e);
		
		std::unique_ptr<Window> m_Window;
		bool m_Running = true;
	};

	// To be defined in CLIENT
	Application* CreateApplication();

}
