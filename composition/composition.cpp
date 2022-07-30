#include <iostream>
#include "Birthday.h"
#include "People.h"

using namespace std;

int main()
{
    Birthday bo(1,20,2018);
    People robert("robert", bo);
    robert.printInfo();
}