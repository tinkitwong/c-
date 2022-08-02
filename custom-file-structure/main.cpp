#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    // reading data from file
    // do not need to call file.close() for ifstream
    ifstream file("players.text");
    int id;
    string name;
    double money;
    while (file >> id >> name >> money) {
        cout << id << ", " << name << ", " << money << endl;
    }
}