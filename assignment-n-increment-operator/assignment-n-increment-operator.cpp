#include <iostream>

using namespace std;

/*
Program to allow unlimited user input (age) and return the average age.

if user input is -1, stop.
*/
int main() 
{
    int x = 10;

    // assignment operators
    x += 10;
    x -= 10;
    x /= 10;
    x *= 10;
    x %= 10;

    // increment operators
    // postorder increment
    x = 20;
    cout << x++ << endl; // 20
    cout << x << endl; // 21

    // preorder increment
    x = 20;
    cout << ++x << endl; // 21
    cout << x << endl; // 21

}
