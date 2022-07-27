#include <iostream>

using namespace std;

int main()
{
    int tuna[5] = {20, 1093, 12, 434, 10};

    int sum = 0;

    // method 1
    sum = tuna[0] + tuna[1] + tuna[2] + tuna[3] + tuna[4];
    cout << "Method I: " << sum << endl;

    // method 2
    sum = 0;
    int tunaLen = *(&tuna + 1) - tuna;
    for (int i = 0; i < tunaLen; i++) {
        sum += tuna[i];
    }
    cout << "Method II: " << sum << endl;
}