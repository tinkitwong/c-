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
}