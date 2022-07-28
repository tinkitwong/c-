#include <iostream>

using namespace std;

int main()
{
    int bucky[5];
    int *bp0 = &bucky[0];
    int *bp1 = &bucky[1];
    int *bp2 = &bucky[2];

    // bp0, 1, 2... is increments of 4 bytes
    cout << "bp0: " << bp0 << endl;
    cout << "bp1: " << bp1 << endl;
    cout << "bp2: " << bp2 << endl;
    
    bp0 += 2;
    // adding int to a pointer changes what its pointing to.
    // bp0 += 2 -> bp0 now points to 4 bytes * 2 from its original mem addr
    cout << "bp0: " << bp0 << endl;

}