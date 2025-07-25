#include <iostream>
using namespace std;
template<class X>
void fun(X a)
{
    std::cout << "Value of a is : " <<a<< std::endl;
}
template<class Y, class Z>
void fun(Y b ,Z c) //overloading of generic function
{
    std::cout << "Value of b is : " <<b<< std::endl;
    std::cout << "Value of c is : " <<c<< std::endl;
}
int main()
{
   fun(10);
   fun(20,30.5);
   return 0;
}
