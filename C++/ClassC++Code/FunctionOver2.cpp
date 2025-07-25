#include<iostream>
using namespace std;
class Calculator
{
    public:
int mul(int a, int b)
{
    cout<<"First"<<endl;
    return a*b;
}
float mul(double x, double y) // overloading
{
    cout<<"Second"<<endl;
    return x*y;
}
};
int main()
{
    Calculator c1;
    cout<<"Mul1 is:"<<c1.mul(6,7)<<endl;
    cout<<"Mul2 is:"<<c1.mul(6.0,5.7)<<endl;
    return 0;
}
