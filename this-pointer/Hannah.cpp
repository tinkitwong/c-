#include <iostream>
#include "Hannah.h"

using namespace std;

Hannah::Hannah(int num)
: h(num)
{
    
};

void Hannah::printStuff()
{
    // implicit this pointer used
    cout << "h=" << h << endl;

    // this refers to the Hannah object
    // this identifies a special type pointer that stores the address of the object
    cout << "this->h=" << this->h << endl;

    // dereference the pointer
    // take the memory location of the current object
    // and calling the variable h
    cout << "(*this).h=" << (*this).h << endl;
}