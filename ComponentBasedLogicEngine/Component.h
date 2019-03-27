#pragma once

namespace sdl_engine
{
	class Component
	{
	public:
		Component(/*const char* test_text*/);
		~Component();
		virtual void BeginPlay();
		virtual void Tick(float DeltaTime);

		unsigned int ComponentType;
	private:
		const char* _test_text;
	};
}