#include <iostream>

using namespace std;

class Enemy 
{
    public:
        // any derived class that inherits from Enemy and overwrites attack()
        // is a polymorphic class
        virtual void attack() {};
};

class Ninja: public Enemy
{
    public:
        void attack()
        {
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