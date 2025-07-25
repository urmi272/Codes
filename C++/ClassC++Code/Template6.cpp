#include <iostream>
using namespace std;
template <class X>
void fun(X a)
{
    cout<<"value of a is : "<<a<<'\n';
}
template <class X>
void fun(T b)
{

        cout<<"Number is even"<<b;

}

int main()
{
   fun(4.6);
   fun(6);
   return 0;
}
