#include "Engine.h"
#include "Window.h"
#include "TestRenderer.h"

int main(int argc, char** argv) 
{
	//INITIALIZE THE ENGINE
	sdl_engine::Engine engine();
	//CREATE WINDOW
	sdl_engine::Window window("SDL_Engine", 800, 600);
	//CREATE RENDERER
	TestRenderer renderer(window);
	//REGISTER TYPE OF COMPONENTS
	//CREATE ACTOR AND GIVE HIM SOME COMPONENTS

	//GAMELOOP:
	bool run = true;
	while(run)
	{
		//DEQUEUE SDL WINDOW EVENTS
		run = window.DequeueEvents();
		//UPDATE ACTORS REGISTERED TO THE ENGINE
		//CLEAR THE WINDOW
		renderer.Clear();
		//CALCULATE THE SCENE
		renderer.Tick();
		//DISPLAY THE SCENE
		renderer.Present();
	}

	return 0;
}