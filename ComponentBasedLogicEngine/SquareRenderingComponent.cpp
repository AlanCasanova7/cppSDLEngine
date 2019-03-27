#include "SquareRenderingComponent.h"
#include <stdio.h>
unsigned int sdl_engine::SquareRenderingComponent::Type = 0;

void sdl_engine::SquareRenderingComponent::Tick(float DeltaTime)
{
	printf("Hi, i'm the %s component updating\n", name);
}