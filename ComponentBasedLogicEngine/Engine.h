#pragma once

#include <stdio.h>

namespace sdl_engine
{
	class Engine
	{
	public:
		Engine(const char* si);
		~Engine();
		Engine(const Engine&) = delete;

		template<typename T>
		void RegisterNewComponentType()
		{
			T::Type = componentTypesCounter;
			componentTypesCounter++;
			printf("Registered a new component type!, current number of types: %d\n", componentTypesCounter);
		}
	private:
		unsigned int componentTypesCounter;
	};
}