#include <iostream>

using namespace std;

int main()
{
    int x = 1;
    // runs the code once (at least) before testing conditional
    // in while(conditional) at the end of do {}
    do {
        cout << x << endl;
        x++;
    } while (x < 10);
}