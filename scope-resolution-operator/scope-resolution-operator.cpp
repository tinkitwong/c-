#include <iostream>

using namespace std;

int tuna = 69;

int main()
{
    // only main() can access tuna
    int tuna = 20;
    // will return the local variable 20
    cout << tuna << endl;

    // to use the global tuna variable,
    // we have to use the unary scope
    // operator "::"
    cout << ::tuna << endl;

}
