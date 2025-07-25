#include<iostream>
using namespace std;
class A
{
public:
    int a;
   void f1()
    {
        cout<<"F1"<<endl;
    }
};
class B1: virtual public A //virtual inheritance or virtual base class or disinheritance
{
public:
    int b1;
    void f2()
    {
        cout<<"F2"<<endl;
    }
};
class B2: virtual public A //virtual inheritance
{
public:
    int b2;
    void f3()
    {
        cout<<"F3"<<endl;
    }
};
class C:public B1, public B2
{
public:
    int c;
    void f4()
    {
        cout<<"F4"<<endl;
    }
};
int main()
{
    B1 ob1;
    cout<<sizeof(ob1)<<endl;
    C obj;
    cout<<sizeof(obj)<<endl;
    obj.f4();
     obj.f3();
      obj.f2();
      obj.f1();
    return 0;
}
