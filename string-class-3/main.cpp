#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1("hi my name is bucky and i love bacon ham");
    cout << s1 << endl;

    // erase everything from 20th character onwards
    s1.erase(20);
    cout << s1 << endl;

    // replace 
    string s2("hi my name is bucky and i love bacon ham");
    s2.replace(14, 5, "samuel jackson");
    cout << s2 << endl;

    // insert
    string s3("hi my name is bucky and i love bacon ham");
    s3.insert(14, "lucky ");
    cout << s3 << endl;
}