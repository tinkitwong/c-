#include <iostream>
#include "Daughter.h"

using namespace std;

void Daughter::doSth()
{
    publicv = 1;
    protectedv = 2;

    // cannot be accessed by derived class
    // privatev = 3;
};