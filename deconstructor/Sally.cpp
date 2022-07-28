#include "Sally.h"
#include <iostream>

using namespace std;

Sally::Sally() 
{
    cout << "I am a constructor" << endl;
}

// has no param or return value; no overloading
Sally::~Sally()
{
    cout << "Sally destoryed" << endl;
}