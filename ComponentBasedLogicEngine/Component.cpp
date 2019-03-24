#include "Component.h"
#include <stdio.h>

sdl_engine::Component::Component(const char* test_text)
{
	_test_text = test_text;
}
sdl_engine::Component::~Component()
{

}
void sdl_engine::Component::BeginPlay()
{
	printf("BEGIN PLAY: %s\n", _test_text);
}
void sdl_engine::Component::Tick(float DeltaTime)
{
	printf("%s updating...\n", _test_text);
}