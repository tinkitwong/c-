#include <iostream>

using namespace std;

/*
template that works with ALL data types
but when we pass in char, we will work with it in a
different way
*/
template <class T>
class Spucky
{
public:
    Spucky(T x)
    {
        cout << x << " is not a character" << endl;
    };
};

// use template specialisation
template <>
// specify the datatype for class to specialise in
class Spucky<char>
{
public:
    Spucky(char x)
    {
        cout << x << " is indeed a character" << endl;
    };
};

int
main()
{
    Spucky<int> spucky_int(7);
    Spucky<double> spucky_double(9.0);
    Spucky<char> spucky_char('q'); 
}