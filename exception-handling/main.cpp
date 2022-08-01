#include <iostream>

using namespace std;

int main()
{
    try {
        int momAge = 30, sonAge = 34;
        if (sonAge > momAge) {
            throw 99;
        }
    } catch (int x) {
        cout << "son cannot be older number, ERROR NUMBER: " << x << endl;
    }
}