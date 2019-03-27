#pragma once

#include "Component.h"

namespace sdl_engine 
{
	class SquareRenderingComponent : public Component
	{
	public:
		static unsigned int Type;

		SquareRenderingComponent(/*const char* test_text, const char* name*/) : Component(/*test_text*/)
		{
			this->name = name;
		}
		~SquareRenderingComponent() { }
		SquareRenderingComponent(const SquareRenderingComponent&) = delete;

		void Tick(float DeltaTime) override;

		const char* name;
	private:
	};
}