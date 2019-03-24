#pragma once

#include <memory>

namespace sdl_engine 
{
	class Window
	{
	public:
		Window(const char* title, const int width, const int height);
		~Window();

		//REMOVAL OF COPY CONSTRUCTOR. NO COPIES OF THE WINDOW ALLOWED
		Window(const Window&) = delete;

		std::shared_ptr<void*> GetHandle();
		bool DequeueEvents() const;

	private:
		std::shared_ptr<void*> window_handle;
	};
}