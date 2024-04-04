// InputEngine.h
#pragma once

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

class InputEngine
{
public:
	struct Button
	{
		bool Pushed;
		bool LetGo;
	};

	struct JoyStick
	{
		int x;
		int y;
		Button button;
	};

	struct Inputs
	{
		JoyStick leftJoyStick, rightJoyStick;
		Button rightDpadUp, rightDpadRight, rightDpadDown, rightDpadLeft;
		Button leftDpadUp, leftDpadRight, leftDpadDown, leftDpadLeft;
		Button start, select;
	};

	InputEngine();

	~InputEngine();

	static Inputs CurrentInput;

	static void UpdateInput();

	static Inputs GetCurrentInput();

private:
	
};