#include <iostream>

using namespace std;

int add(int x, int y)
{
    return x + y;
}

int main()
{
    int result = add(10, 20);
    cout << "result is " << result << endl;
    return 0;
}