#include <iostream>

using namespace std;

// default args have to be set in function prototype
int volume (int l = 1, int w = 1, int h = 1);

int main()
{
    cout << "Explicitly set args: " << volume(10, 10, 10) << endl;
    cout << "Default args: " << volume() << endl;
    // 5 is set to first arg
    cout << "Explicitly set 1 args: " << volume(5) << endl;
    // 5 is set to first arg, 6 to second arg
    cout << "Explicitly set 2 args: " << volume(5, 6) << endl;

}

int volume(int l, int w, int h)
{
    return l * w * h;
}