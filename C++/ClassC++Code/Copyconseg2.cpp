#include <iostream>
using namespace std;
class abc
{
 int a, b;
 public:
 abc(int x, int y) //Parameterized constructor
 {
    a = x;
    b = y;
 }
abc(abc &p)
{
a = p.a;
b = p.b;
}
void showdata()
{
cout << a << " , " << b << endl;
}
};
int main()
{
abc c1(10, 20);
c1.showdata();
abc c2(c1); // calling copy constructor
abc c3=c1;  // calling copy constructor
c2.showdata();
c3.showdata();
}