#pragma once

#include "P_Headers.h"
#include "Window.h"
#include <memory>

namespace sdl_engine
{
	class Renderer
	{
	public:
		Renderer(Window& window);
		~Renderer();

		//REMOVING COPY CCONSTRUCTOR, WE DON'T WANT THE USER TO 
		//CREATE COPIES OF THE RENDERER
		Renderer(const Renderer&) = delete;
		
		virtual void Tick() = 0;
		void Clear() const;
		void Present() const;
		void DrawLine(const int X1, const int Y1, const int X2, const int Y2) const;

	protected:
		Window& window_rf;
		std::unique_ptr<SDL_Renderer*> renderer_handle;
	};
}