#include "InputEngine.h"
#include "PhysicsEngine.h"
//#include <stdlib.h>

enum Games { Snake, Centipede, Zombie, Platformer };
Games currentGame;

void setup()
{
	InputEngine inputEngine();

	//Serial.begin(9600);
	//Serial.println("Objects: " + sizeof(phys.objects));
}

void loop()
{
	InputEngine::GetCurrentInput();
	//InputEngine::UpdateInput();//IDK why it wont compile with this
}

void ReStartDuinoBoy()
{

}

void StartGame(Games selectedGame)
{
	currentGame = selectedGame;
	byte maxCollisions = 0;

	switch (currentGame)
	{
		case Snake:
			break;
		case Centipede:
			break;
		case Zombie:
			maxCollisions = 256;
			break;
		case Platformer:
			maxCollisions = 256;
			break;
		default:
			ReStartDuinoBoy();
			break;
	}

	const PhysicsEngine phys(maxCollisions);
}