#include <iostream>

using namespace std;

int main()
{
    int age = 20;
    switch (age)
    {
    case 5:
        cout << "age is 5" << endl;
        break;

    case 10:
        cout << "age is 10" << endl;
        break;

    default:
        cout << "default case reached" << endl;
        break;
    }
}