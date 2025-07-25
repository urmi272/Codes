#include <iostream>
using namespace std;
// Base class
class Parent {
public:
    int x;
};
// Sub class inheriting from Base Class(Parent)
class Child : protected Parent {
public:
    int y;
    void getSum()
    {
        int sum=x+y;
        cout<<"Sum is:"<<sum<<endl;
    }
};
// Driver Code
int main()
{
    Child obj1;
    // An object of class child has all data members
    // and member functions of class parent
    obj1.y = 7;
    obj1.x = 91;
    cout << obj1.y << endl;
    cout << obj1.x << endl;
    obj1.getSum();
    return 0;
}


