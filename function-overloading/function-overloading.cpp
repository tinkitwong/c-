#include <iostream>

using namespace std;

// function overloading
void printNumber(int x);
void printNumber(float x);

int main()
{
    int a = 54;
    float b = 32.498;

    printNumber(a);
    printNumber(b);
}

void printNumber(int x)
{
    cout << "i am printing an int: " << x << endl;
}

void printNumber(float x)
{
    cout << "i am printing an float: " << x << endl;
}