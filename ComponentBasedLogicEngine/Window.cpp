#include "Window.h"
#include "P_Headers.h"

sdl_engine::Window::Window(const char* title, const int width, const int height)
{
	this->window_handle = std::make_shared<void*>(SDL_CreateWindow(title,
			SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
			width, height, 0));
}

sdl_engine::Window::~Window()
{
	SDL_DestroyWindow((SDL_Window*)*window_handle.get());
}

std::shared_ptr<void*> sdl_engine::Window::GetHandle()
{
	return window_handle;
}

bool sdl_engine::Window::DequeueEvents() const
{
	SDL_Event sdl_event;
	while (SDL_PollEvent(&sdl_event)) 
	{
		if (sdl_event.type == SDL_QUIT) 
		{
			return false;
		}
	}
	return true;
}