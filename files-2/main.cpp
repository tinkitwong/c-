#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    // create file object
    ofstream file;
    // create file if it does not exist
    file.open("tuna.text");
    file << "I am love tuna and tuna loves me.\n";
    file.close();

    // faster way to initiate a file object
    ofstream file_2("tuna2.text");
    if(file_2.is_open()) {
        cout << "file_2 is open" << endl;
    } else {
        cout << "we scrwed up" << endl;
    }
    file_2 << "file_2 is here\n";
    file_2.close();
}