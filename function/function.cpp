#include <iostream>

using namespace std;

// function prototyping
void printSomething();

int main ()
{    
    /** call printSomething function; which has to be either:
    *   1. declared before main() (literally put the function before main())
    *   2. declared with function prototyping
    */ 
    printSomething();
    // function prototyping
    return 0;
}

// return type << function name >> 
void printSomething ()
{
    cout << "inside printSomething function" << endl;
}