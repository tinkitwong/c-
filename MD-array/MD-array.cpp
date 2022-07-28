#include <iostream>

using namespace std;

// multi-dimensional array
int main()
{
    // sally[row-size][column-size]
    int sally[2][3] = {{2,3,4}, {8,9,10}};

    // print out the MD array
    // nested for loop
    for (int row = 0; row < 2; row++) {
        for (int col = 0; col < 3; col++) {
            cout << sally[row][col] << " ";
        }
        cout << endl;
    }
}