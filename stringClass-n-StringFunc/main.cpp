#include <iostream>
#include <string> // gives string functions

using namespace std;

int main()
{
    // string bucky;
    // cin reads in the first non-white character separated input
    // input : hi im bored
    // bucky will only store "hi"
    // cin >> bucky;
    // cout << "the string i entered is : " << bucky << endl;

    // get the entire line from cin
    // string buckyII;
    // getline(cin, buckyII);
    // cout << buckyII << endl;

    // using string constructor
    // string s1("Hamster ");
    // string s2;
    // string s3;

    // // copy strings
    // s2 = s1;
    // s3.assign(s1);
    // cout << s1 << s2 << s3 << endl;

    // string is char[]
    string s1 = "blaasdasdsa";
    cout << s1.at(3) << endl;
    for (int x = 0; x < s1.length(); x++) {
        cout << s1.at(x) << endl;
    }
}