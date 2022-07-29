#include <iostream>
#include "Sally.h"

using namespace std;

Sally::Sally()
{

}

void Sally::printStuff()
{
    cout << "i am a regular function" << endl;
}

void Sally::printStuf2() const
{
    cout << "i am a const function" << endl;
}