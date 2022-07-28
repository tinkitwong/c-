#include <iostream>

using namespace std;

void passByValue(int x);
void passByReference(int *x);

/*
There are 2 ways to pass args to functions
1. Pass by value (pass a copy)
2. Pass by reference (pass the variable's address)
*/
int main()
{
    int betty = 13;
    int sandy = 13;

    passByValue(betty);
    passByReference(&sandy);

    cout << "Betty is now " << betty << endl;
    cout << "Sandy is now " << sandy << endl;
}

// the copy's value is changed
void passByValue(int x)
{
    x = 99;
};

// the actual value is changed
void passByReference(int *x) // takes in a memory addr
{
    *x = 66;
}