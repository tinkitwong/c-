#include <iostream>

using namespace std;

// pointer points to memory address
int main()
{
    int fish = 5;

    // retrieve mem addr of fish with the address-of operator &
    cout << &fish << endl;

    // pointer points to mem addr
    int *fishPointer;
    fishPointer = &fish;
    cout << fishPointer << endl;
}