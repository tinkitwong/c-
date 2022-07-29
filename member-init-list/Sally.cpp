#include <iostream>
#include "Sally.h"

using namespace std;

Sally::Sally(int a, int b)
// member init list syntax
// within constructor, we set regVar value to a
// and constVar value to b
: regVar(a), constVar(b)
{
}

void Sally::print()
{
    cout << "regVar: " << regVar << endl;
    cout << "constVar: " << constVar << endl;
}