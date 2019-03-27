#pragma once

#include <memory>
#include <vector>
#include "Component.h"

namespace sdl_engine
{
	class Actor
	{
	public:
		void BeginPlay();
		void Tick(float deltaTime);

		template<typename T>
		std::shared_ptr<T> GetComponent() 
		{
			int id = T::Type;
			for (int i = Components.begin(); i != Components.end(); i++)
			{
				if (id == *i->ComponentType)
				{
					return std::dynamic_pointer_cast<T>*i;
				}
			}

			return nullptr;
		}

		template<typename T>
		std::shared_ptr<T> AddComponent() 
		{
			std::shared_ptr<T> newComponent = std::make_shared<T>(); //TOASK
			InternalAddComponent(newComponent);
			newComponent->ComponentType = T::Type;
			return newComponent;
		}
	private:
		//I WAS ABOUT TO DEFINE THE ACTOR, I ALREADY CREATED THE
		//ABSTRACT COMPONENT CLASS, ACTOR WILL HAVE A VECTOR OF 
		//COMPONENTS, WHEN HE ADDS A COMPONENT TO THAT VECTOR HE
		//ALSO HAVE TO OVERWRITE THE COMPONENT "COMPONENTTYPE" BY
		//ASKING THE ENGINE WHICH VALUE DOES THAT SPECIFIC COMPONENT
		//HAVE.
		std::vector<std::shared_ptr<Component>> Components;

		void InternalAddComponent(std::shared_ptr<Component> Component);
	};
}