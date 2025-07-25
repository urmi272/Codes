#include <iostream>
using namespace std;
class Base
{
    int x,y;
    public:
    Base(int i, int k) // parameterized constructor
    {
        x = i;
        y=k;
        cout << "Base Parameterized Constructor: "<<x<<"\n"<<y<<endl;
    }
};

class Derived: public Base//derived class
{
    int c,i;
    public:
    Derived(int j, int k):Base(j,k) // parameterized constructor
    {
        c = j;
        cout << "Derived Parameterized Constructor:"<<c;
    }
};

int main()
{
    Derived d1(10,20) ;
}
