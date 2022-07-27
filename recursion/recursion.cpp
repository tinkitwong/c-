#include <iostream>

using namespace std;

int factorial(int x);


/*
    Implement factorial finder with recursion
*/
int main()
{
    cout << factorial(4) << endl;
}

int factorial(int x)
{
    // base case
    if (x == 1) {
        return 1;
    }

    return x * factorial(x-1);
}