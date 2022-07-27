#include <iostream>

using namespace std;

void printArray(int array[], int sizeOfArray);

int main()
{
    int bucky[5] = {1,2,3,4,5};
    int buck[3] = {1,2,3};
    printArray(bucky, 5);
    printArray(buck, 3);
}

void printArray(int array[], int sizeOfArray)
{
    for (int i = 0; i < sizeOfArray; i++) {
        cout << array[i] << endl;
    }
}