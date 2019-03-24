#include "Engine.h"
#include "P_Headers.h"

sdl_engine::Engine::Engine()
{
	SDL_Init(SDL_INIT_VIDEO);
}

sdl_engine::Engine::~Engine()
{
	SDL_Quit();
}