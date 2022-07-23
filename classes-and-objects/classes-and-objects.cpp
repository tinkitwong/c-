#include <iostream>

using namespace std;

class RandomClass
{
  // access specifier
  public:
    void printStuff()
    {
      cout << "printing random stuff" << endl;
    }

};

int main()
{
  // instantiate object and call public method
  RandomClass().printStuff();

  // another way to instantiate and call public method
  RandomClass randomClassObject;
  randomClassObject.printStuff();
  return 0;
}