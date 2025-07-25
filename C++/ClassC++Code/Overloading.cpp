#include<iostream>
using namespace std;
class Test
{
public:
    int mul(int b)
    {
        return b*b;
    }
   float mul(int a, int b) // function overloading
   {
       return a*b;
   }
};

int main()
{
    Test obj;
    cout<<"Mul of one function is:"<<obj.mul(10,20)<<endl;
   cout<<"Mul of one function is:"<<obj.mul(10)<<endl;
    return 0;
}
