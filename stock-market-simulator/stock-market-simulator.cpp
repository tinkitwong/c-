#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float amount;
    float capital = 10000.00f;
    float rate = .01f;

    for (int day = 1; day <= 20; day++) {
        amount = capital * pow(1+rate, day);
        cout << day << " ---- " << amount << endl;
    }
}