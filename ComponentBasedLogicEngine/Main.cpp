#include "Engine.h"
#include "Window.h"
#include "TestRenderer.h"
#include "SquareRenderingComponent.h"
#include "Actor.h"

int main(int argc, char** argv) 
{
	//INITIALIZE THE ENGINE
	sdl_engine::Engine engine("si");
	//CREATE WINDOW
	sdl_engine::Window window("SDL_Engine", 800, 600);
	//CREATE RENDERER
	TestRenderer renderer(window);
	//REGISTER TYPE OF COMPONENTS
	engine.RegisterNewComponentType<sdl_engine::SquareRenderingComponent>();
	//CREATE ACTOR AND GIVE HIM SOME COMPONENTS
	sdl_engine::Actor actor = sdl_engine::Actor();
	auto addedComponent = actor.AddComponent<sdl_engine::SquareRenderingComponent>();
	addedComponent->name = "pino";


	//GAMELOOP:
	bool run = true;
	while(run)
	{
		//DEQUEUE SDL WINDOW EVENTS
		run = window.DequeueEvents();
		//UPDATE ACTORS REGISTERED TO THE ENGINE
		actor.Tick(1.0f);
		//CLEAR THE WINDOW
		renderer.Clear();
		//CALCULATE THE SCENE
		renderer.Tick();
		//DISPLAY THE SCENE
		renderer.Present();
	}

	return 0;
}