#include <iostream>

using namespace std;

int main() 
{
    int age = 23;
    int money = 650;
    if (age > 21 && money > 500) {
        cout << "logical operator &&" << endl;
        cout << "logical operator works to reduce nesting conditionals" << endl;
        cout << "otherwise, we'd have nested if-blocks" << endl;
    }
    cout << "-------------------------" << endl;

    if (age > 21 || money > 5000) {
        cout << "logical operator ||" << endl;
        cout << "logical operator works to reduce nesting conditionals" << endl;
        cout << "otherwise, we'd have nested if-blocks" << endl;
    }
}