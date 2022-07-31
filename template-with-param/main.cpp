#include <iostream>

using namespace std;

template <class First, class Second>
First smaller(First x, Second y) {
    return x < y ? x : y;
}

int main()
{
    int x = 89;
    double y = 56.7;
    cout << smaller(x,y) << endl;
}