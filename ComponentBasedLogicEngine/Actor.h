#pragma once

#include "Component.h"
#include <vector>
#include <memory>

namespace sdl_engine
{
	class Actor
	{
	public:
		Actor();
		~Actor();

		void BeginPlay();
		void Tick(float deltaTime);

	private:
		//I WAS ABOUT TO DEFINE THE ACTOR, I ALREADY CREATED THE
		//ABSTRACT COMPONENT CLASS, ACTOR WILL HAVE A VECTOR OF 
		//COMPONENTS, WHEN HE ADDS A COMPONENT TO THAT VECTOR HE
		//ALSO HAVE TO OVERWRITE THE COMPONENT "COMPONENTTYPE" BY
		//ASKING THE ENGINE WHICH VALUE DOES THAT SPECIFIC COMPONENT
		//HAVE.
	};
}