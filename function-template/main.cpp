#include <iostream>

using namespace std;

// template defintion to make a generic datatype
template <class bucky>
bucky addCrap(bucky a, bucky b)
{
    return a+b;
}

int main()
{
    float a = 1.0, b = 2.2, sum;
    sum = addCrap(a,b);
    cout << sum << endl;

    int c = 1, d = 2, sumII;
    sumII = addCrap(c,d);
    cout << sumII << endl;
}