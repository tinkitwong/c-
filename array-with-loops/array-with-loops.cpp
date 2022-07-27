#include <iostream>

using namespace std;

int main()
{
    int bucky[9] = {0};
    //(&arr + 1) points to the memory address right after the end of the array.
    // *(&arr + 1) simply casts the above address to an int *.
    // Subtracting the address of the start of the array, from the address of the end of the array,​ gives the length of the array.
    int arrLen = *(&bucky + 1) - bucky;
    cout << "Element   -   Value" << endl;
    for (int i = 0; i < arrLen; i++)
    {
        bucky[i] = 99;
        cout << i << "   ---------    " << bucky[i] << endl;
    }
}