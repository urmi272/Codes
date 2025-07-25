//Function with argument and no return type
#include<iostream>
using namespace std;
class Fun
{
    int a,b,c;
public:

    int Sum(int x, int y)
    {
        a=x;
        b=y;
        c=a+b;
        return c;
    }
};
int main()
{
    int a1=10,b1=15, result; //actual argument
    Fun obj;
    result =obj.Sum(a1,b1);
    cout<<"sum is:"<<result;
    return 0;
}
