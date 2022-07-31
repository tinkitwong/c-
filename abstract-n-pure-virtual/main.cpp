#include <iostream>

using namespace std;

// abstract class
// it is a class with a pure virtual function
class Enemy 
{
    public:
        // pure virtual function type functionName()=0;
        // derived class that inherits a base class with a pure virtual function
        // must override that function
        virtual void attack()=0;
};

class Ninja: public Enemy
{
    public:
        void attack() {
            cout << "ninja attack" << endl;
        };
};

class Monster: public Enemy
{
    public:
        void attack()
        {
            cout << "monster attack" << endl;
        };
};

int main()
{
    Ninja n;
    Monster m;
    // create Enemy object pointer = address of ninja object
    // ninja object is of type enemy
    // anything an enemy can do, a ninja can do
    Enemy *enemy1 = &n;
    Enemy *enemy2 = &m;
    enemy1->attack();
    enemy2->attack();
}