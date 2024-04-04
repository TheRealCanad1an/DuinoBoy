// PhysEngine.h
#pragma once

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

class PhysicsEngine
{
public:
	struct Collidable
	{

	};

	Collidable* objects;

	PhysicsEngine(byte);

	~PhysicsEngine();

	static void SetGravity(int);
	static int GetGravity();

private:
	static int gravity;
};