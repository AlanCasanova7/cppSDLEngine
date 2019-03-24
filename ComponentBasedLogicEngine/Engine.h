#pragma once

namespace sdl_engine
{
	class Engine
	{
	public:
		Engine();
		~Engine();

		Engine(const Engine&) = delete;

		template<typename T>
		void RegisterNewComponentType()
		{

			componentTypesCounter++;
			printf("Registered a new component type!, current number of types: %d\n", componentTypesCounter);
		}
	private:
		unsigned int componentTypesCounter;
	};
}