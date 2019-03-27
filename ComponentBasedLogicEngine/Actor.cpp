#include "Actor.h"

void sdl_engine::Actor::InternalAddComponent(std::shared_ptr<sdl_engine::Component> Component)
{
	Components.push_back(Component);
}

void sdl_engine::Actor::BeginPlay()
{

}

void sdl_engine::Actor::Tick(float DeltaTime)
{
	for (auto i = Components.begin(); i != Components.end(); i++)
	{
		std::shared_ptr<Component> currentPointer = *i;
		currentPointer->Tick(DeltaTime);
	}
	//for (int i = 0; i < Components.size(); i++)
	//{
	//	Components[i]->Tick(DeltaTime);
	//}
}