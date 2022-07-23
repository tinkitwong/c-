#include <iostream>
#include <string>

using namespace std;

class RandomClass
{
  private:
    string name;

  public:
    // constructor is the class name with no return type
    RandomClass(string name) {
        this->setName(name);
    }

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
  RandomClass class2("random name");
  cout << class2.getName() << endl;
  return 0;
}