#include<iostream>
using namespace std;
class Base
{
protected:
    int a;
protected:
     void set()
     {
    a=10;
}
};

class Derived : public Base // inheritance
{
public:
    int b, c;
    void setData(int x)
    {
        Base::set();
        b=x;
    }
    void sum()
    {
        c=a+b;
        cout<<"sum of "<<a<<" and "<<b<<" is:"<<c<<endl;
    }
};
int main()
{
    Derived obj1;
    //obj1.set();
    obj1.setData(30);
    obj1.sum();
    return 0;

}
