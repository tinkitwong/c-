#include <iostream>
using namespace std;

int main()
{
    int bacon = 0;
    while (bacon <= 5) {
        cout << "bacon is " << bacon << endl;

        /* Side Note
        The increment operator can either increase the value of the variable by 1 before 
        assigning it to the variable or can increase the value of the variable by 1 after 
        assigning the variable
        */
        bacon++;
    }
    
    return 0;
}