#include <iostream>

using namespace std;

int main()
{
    // pangry is the 18 th char
    string s1("OMG i think i am pangry");
    cout << s1.substr(17, 7) << endl;

    // swap function
    string one("apples");
    string two("beans");
    one.swap(two);
    cout << one << " " << two << endl;

    // find function gives the starting location of the first
    // occurance of result
    string s2("ham is spam oh yes i am!");
    cout << s2.find("am") << endl; // 1

    // reverse find
    // print from right to left
    cout << s2.rfind("am") << endl; // 1

}