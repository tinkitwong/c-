#include <iostream>
#include <fstream>

using namespace std;

int getWhatTheyWant();
void displayItems(int);

// main function
int main()
{
    int whatTheyWant;
    whatTheyWant = getWhatTheyWant();

    while (whatTheyWant != 4)
    {
        whatTheyWant = getWhatTheyWant();
        switch (whatTheyWant)
        {
        case 1:
            displayItems(1);
            break;
        case 2:
            displayItems(2);
            break;
        case 3:
            displayItems(3);
            break;
        }
    }
}

// getWhatTheyWant function
int getWhatTheyWant()
{
    int choice;
    cout << "1 - just for plain items" << endl;
    cout << "2 - helpful items" << endl;
    cout << "3 - harmful items" << endl;
    cout << "4 - quit program" << endl;

    cin >> choice;
    return choice;
}

// displayItems function
void displayItems(int a)
{
    ifstream file("./objects.txt");
    string name;
    double power;

    if (a == 1)
    {
        while (file >> name >> power)
        {
            if (power == 0)
            {
                cout << name << " " << power << endl;
            }
        }
    }
    else if (a == 2)
    {
        while (file >> name >> power)
        {
            if (power > 0)
            {
                cout << name << " " << power << endl;
            }
        }
    }
    else if (a == 3)
    {
        while (file >> name >> power)
        {
            if (power < 0)
            {
                cout << name << " " << power << endl;
            }
        }
    }
    else {
        cout << "Enter the right choice" << endl;
    }
}