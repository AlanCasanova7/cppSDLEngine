#pragma once

#include "Renderer.h"
#include "Window.h"

class TestRenderer : public sdl_engine::Renderer
{
public:
	TestRenderer(sdl_engine::Window& window) : sdl_engine::Renderer(window) {}
	void Tick() override;
};