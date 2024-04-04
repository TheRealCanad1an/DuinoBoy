#include "PhysicsEngine.h"

PhysicsEngine::PhysicsEngine(byte size)
{
	objects = new Collidable[size];
}

PhysicsEngine::~PhysicsEngine()
{
	delete[] objects;
}

void PhysicsEngine::SetGravity(int newGravity)
{
	PhysicsEngine::gravity = newGravity;
}

int PhysicsEngine::GetGravity()
{
	return PhysicsEngine::gravity;
}