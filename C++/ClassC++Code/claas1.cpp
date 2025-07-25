#include <iostream>
using namespace std;
// Base class
class Parent {
protected:
    int x;
};
// Sub class inheriting from Base Class(Parent)
class Child : public Parent {
public:
    int y;
    void set()
    {

    y=10;
    x=40;
    }
    void display()
    {
        cout<<x<<"\n"<<y;
    }
};
// Driver Code
int main()
{
    Child obj1;
    // An object of class child has all data members
    // and member functions of class parent
    obj1.set();
    obj1.display();

    return 0;
}

