#include <iostream>

using namespace std;

/* 
The main difference between Sentinel and Counter Controlled Loop in C
is that in a Sentinel Controlled Loop, exactly how many times loop body 
will be executed is not known and in a Counter Controlled Loop, how many 
times loop body will be executed is known.
*/

/*
Program to allow unlimited user input (age) and return the average age.

if user input is -1, stop.
*/
int main() 
{
    int age, count = 0, totalAge = 0;

    cout << "Enter first person's age or -1 to quit" << endl;
    cin >> age;
    while (age != -1) {
        totalAge += age;
        count++; 
        cin >> age;
    }

    cout << "Total age: " << totalAge << endl;
    cout << "Number of ages included: " << count << endl;
    cout << "Average age: " << totalAge / count << endl;
    return 0;    
}

