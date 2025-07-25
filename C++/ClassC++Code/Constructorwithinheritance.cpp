#include <iostream>
using namespace std;
class Base
{
   int x;

public:
   Base() // default constructor
   {
      cout << "Base default constructor\n";
   }
};

class Derived : public Base //creating derived class
{
   int y;

public:
   Derived() // default constructor
   {
      cout << "Derived default constructor\n";
   }
   // parameterized constructor
   Derived(int i)
   {
      cout << "Derived parameterized constructor\n";
   }
};

int main()
{
   Base b;
   Derived d1;
   Derived d2(10);
}
