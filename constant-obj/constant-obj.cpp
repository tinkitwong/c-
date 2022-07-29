#include <iostream>
#include "Sally.h"

using namespace std;

int main()
{
    Sally so;
    so.printStuff();

    // create a const object.
    const Sally so1;

    // error message because so1.printStuff is not a const
    // so1.printStuff();
    so1.printStuf2();
    
}