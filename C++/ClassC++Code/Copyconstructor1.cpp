#include <iostream>
using namespace std;
class A
{
   public:
    int x;
    A(int a)                // parameterized constructor.
    {
      x=a;
    }
    A(A &i)               // copy constructor (asscessed thro obj only)
    {
       x = i.x;
    }
};
int main()
{
  A a1(20);               // Calling the parameterized constructor.
  A a2(a1);

 cout<<a1.x++<<endl;              //  Calling the copy constructor.
 cout<<a2.x<<endl;
  cout<<a1.x<<endl;
  return 0;
}
