#include <iostream>
using namespace std;
class A // First Base class
{
    protected:
     int a;
    public:
    void get(int n)
    {
        a = n;
    }
};

class B // Second base class
{
    protected:
    int b;
    public:
    void get(int n)
    {
        b = n;
    }
};
class C : public A, public B
{
   public:
    void display()
    {
        cout << "The value of a is : " <<a<<endl;
        cout << "The value of b is : " <<b<<endl;
        cout<<"Addition of a and b is : "<<a+b;
    }
};
int main()
{
   C c;
   c.A::get(10); // if complier decides it at compile time then it compile time binding
   c.B::get(20);
   c.display();

    return 0;
}
