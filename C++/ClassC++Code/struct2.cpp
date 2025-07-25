#include <iostream>
using namespace std;
struct Base {
    int x;
};
struct Derived : Base {
    int y;
};
// Is equivalent to struct Derived : public Base {}
int main()
{
    Derived d;
    d.x = 20;
    d.y=30; // Works fine because inheritance is public
    cout << d.x<<endl;
    cout << d.y;
return 0;
}

