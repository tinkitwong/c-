#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// simulate random dice numbers possible
// Note: rand() uses a seed. aka, it ain't random bro
int main ()
{
    // seed with a changing value
    srand(time(0));
    // cstdlib's rand()
    for (int i = 0; i < 25; i++) {
        // mod 6 to keep values from 0 - 5
        // + 1 to get dice values
        cout << 1 + (rand() % 6) << endl;
    }
}