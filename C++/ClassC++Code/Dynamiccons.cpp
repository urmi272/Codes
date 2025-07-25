#include <iostream>
using namespace std;
class dyncons
{
 int *p;

 public:
 dyncons()
  {
   p=new int;
   *p=10;
  }
 dyncons(int v)
  {
   p=new int;
   *p=v;
  }

  void dis()
 {
   cout<<"The value of object Obj1's p is:"<<*p<<endl;
 }
};
int main()
{
dyncons Obj1;
dyncons Obj2(9);
Obj1.dis(); // 10
Obj2.dis();
}
