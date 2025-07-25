#include<iostream>
using namespace std;
class Test{
    public:
void fun(int x) //call by value
{
    cout<<"X is:"<<x<<endl;
}
void fun(int &a) // call by reference
{
    cout<<"a is:"<<a<<endl;
}
};
int main()
{
    Test t1;
    int a=20;
    t1.fun(a);
    return 0;
}



