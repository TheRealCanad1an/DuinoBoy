#include <stdlib.h>
#include <PhysEngine.cpp>

void setup()
{
	byte size = 256;
	PhysEngine phys(size);

	Serial.begin(9600);
	Serial.println("Objects: " + sizeof(phys.objects));
}

void loop()
{

}