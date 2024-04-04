#include "InputEngine.h"

InputEngine::InputEngine()
{

}

InputEngine::~InputEngine()
{

}

void InputEngine::UpdateInput()
{
	Inputs input = Inputs();

	CurrentInput = input;
}

InputEngine::Inputs InputEngine::GetCurrentInput()
{
	return CurrentInput;
}