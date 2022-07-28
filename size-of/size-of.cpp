#include <iostream>

using namespace std;

void passByValue(int x);
void passByReference(int *x);

/*
Determines size of x in bytes

The more precise a value is, the more memory it takes up
*/
int main()
{
    char c;
    int b;
    double a;
    cout << sizeof(c) << endl;
    cout << sizeof(b) << endl;
    cout << sizeof(a) << endl;

    double bucky[10];
    cout << sizeof(bucky) << endl;

    // To find the number of elements
    cout << sizeof(bucky) / sizeof(bucky[0]) << endl;
}