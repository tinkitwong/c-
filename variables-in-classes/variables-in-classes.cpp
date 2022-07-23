#include <iostream>
#include <string>

using namespace std;

class WrongWayToUseVariablesClass
{
  // usually making class variables public is not good
  public:
    string name;
};

class BetterWayToUseVariablesClass
{
  // lets just private it, and use getters n setters to modify it
  private:
    string name;

  public:
    string getName()
    {
      return this->name;
    }

    void setName(string x)
    {
      this->name = x;
    }
};

int main()
{
  WrongWayToUseVariablesClass class1;
  class1.name = "WrongWayToUseVariablesClass name";
  cout << class1.name << endl;

  BetterWayToUseVariablesClass class2;
  class2.setName("testname for class 2");
  cout << class2.getName() << endl;
  return 0;
}