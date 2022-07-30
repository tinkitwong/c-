#include <iostream>

using namespace std;

class StankFirst{
    public:
        StankFirst()
        {
            stinkyVar = 0; 
        };
    private:
        int stinkyVar;
    
    // this function is a friend and has access to everything in StankFirst without
    // being a function of the class itself
    // friend function prototype
    // it is only in the implementing class that has the ability to give the
    // friendship status
    friend void stinkysFriend(StankFirst &sfo);
};

class StankFirst;
void stinkysFriend(StankFirst &sfo);

/*
 A friend function is a function that is specified outside a class but 
 has the ability to access the class members’ protected and private data. 
 A friend can be a member’s function, function template, or function, or 
 a class or class template, in which case the entire class and all of its 
 members are friends.
*/

int main()
{
    StankFirst sfo;
    stinkysFriend(sfo);
}


void stinkysFriend(StankFirst &sfo)
{
    sfo.stinkyVar = 99;
    cout << sfo.stinkyVar << endl;
}