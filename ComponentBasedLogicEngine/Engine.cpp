#include "Engine.h"
#include "P_Headers.h"

sdl_engine::Engine::Engine(const char* si)
{
	SDL_Init(SDL_INIT_VIDEO);
	this->componentTypesCounter = 0;
}

sdl_engine::Engine::~Engine()
{
	SDL_Quit();
}