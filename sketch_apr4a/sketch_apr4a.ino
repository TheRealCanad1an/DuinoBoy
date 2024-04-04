class Collidable {};

class PhysicsEngine
{
public:
	static Collidable* objects;

	PhysicsEngine(byte size)
	{
		objects = new Collidable[size];
	}

	~PhysicsEngine()
	{
		delete[] objects;
	}

	void SetGravity(int);
	int GetGravity();

private:
	int gravity;
};

void setup() {
  byte size = 256;
  PhysicsEngine phys(size);

  Serial.begin(9600);
  Serial.println("Objects: " + sizeof(phys.objects));
}

void loop() {
  // put your main code here, to run repeatedly:

}
