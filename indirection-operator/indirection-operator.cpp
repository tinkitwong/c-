#include <iostream>
#include "Sally.h"

using namespace std;

int main()
{
    Sally sally1;
    Sally *sallyPointer = &sally1;
    
    sally1.printCrap();
    // A pointer to access a class stuff needs
    // the arrow selection operator ->
    sallyPointer->printCrap();
}