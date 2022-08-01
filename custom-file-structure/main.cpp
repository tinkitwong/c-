#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream file("players.text");
    cout << "Enter player id, name, and money" << endl;
    // end file marker is Ctl+D for mac
    cout << "press Ctrl+D to quit\n" << endl;

    int idNumber;
    string name;
    double money;

    // user enter idNumber name money
    while (cin >> idNumber >> name >> money) {
        file << idNumber << " " << name << " " << money << endl;
    }
    file.close();
}