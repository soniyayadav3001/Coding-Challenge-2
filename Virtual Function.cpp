#include <iostream>
using namespace std;

class base
{
  public:
  virtual void show()
  {
    cout << "Base class\n";
  }
};
 
class derived:public base
{
  public:  void show()
   {
     cout << "Derived Class";
   }
};

int main()
{
  base* p; //Base class pointer
  derived c; //Derived class object
  p = &c;
  c.show(); //Late Binding Occurs
}
