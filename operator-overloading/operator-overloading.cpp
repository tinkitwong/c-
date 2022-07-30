#include <iostream>
#include "Sally.h"

using namespace std;

int main()
{
    Sally a(34);
    Sally b(21);
    Sally c;

    // use overloaded operator "operator+"
    c = a+b;
    cout << c.num << endl;
}