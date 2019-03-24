#include "Renderer.h"
#include "P_Headers.h"

sdl_engine::Renderer::Renderer(sdl_engine::Window& window) : window_rf(window)
{
	auto window_ptr = std::reinterpret_pointer_cast<SDL_Window*>(window.GetHandle());
	auto window_handle = *window_ptr.get();
	renderer_handle = std::make_unique<SDL_Renderer*>(SDL_CreateRenderer(window_handle, -1, 0));
}

sdl_engine::Renderer::~Renderer()
{
	SDL_DestroyRenderer(*renderer_handle.get());
}

void sdl_engine::Renderer::Clear() const
{
	SDL_SetRenderDrawColor((SDL_Renderer*)*renderer_handle.get(), 0, 0, 0, 255);
	SDL_RenderClear((SDL_Renderer*)*renderer_handle.get());
}

void sdl_engine::Renderer::Present() const
{
	SDL_RenderPresent((SDL_Renderer*)*renderer_handle.get());
}

void sdl_engine::Renderer::DrawLine(const int X1, const int Y1, const int X2, const int Y2) const
{
	SDL_SetRenderDrawColor((SDL_Renderer*)*renderer_handle.get(), 255, 0, 0, 255);
	SDL_RenderDrawLine((SDL_Renderer*)*renderer_handle.get(), X1, Y1, X2, Y2);
}