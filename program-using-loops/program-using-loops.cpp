#include <iostream>
using namespace std;

int main()
{
    int x = 1, sum = 0, number;
    // cout << "sum is: " << sum << endl;
    while (x <= 5) {
        cin >> number;
        sum += number;
        // cout << "sum is: " << sum << endl;
        x++;
    }
    cout << "sum of the numbers: " << sum << endl;
    return 0;
}