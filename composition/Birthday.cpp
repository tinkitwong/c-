#include <iostream>
#include "Birthday.h"

using namespace std;

Birthday::Birthday(int m, int d, int y)
{
    // set private vars to the input values
    month = m;
    day = d;
    year = y;
};

void Birthday::printDate()
{
    cout << month << "/" << day << "/" <<  year << endl;
};