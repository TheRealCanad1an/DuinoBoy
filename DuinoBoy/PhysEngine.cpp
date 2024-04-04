class Collidable
{
    
};

class PhysEngine
{
    public:
        Collidable* objects;

        PhysEngine(byte size)
        {
        objects = new Collidable[size];
        }

        ~PhysEngine()
        {
            delete[] objects;
        }
};