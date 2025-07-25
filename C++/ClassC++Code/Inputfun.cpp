#include<iostream>
using namespace std;
class Fun
{
    int a,b,c;
public:
    int Sum(int a1,int b1)//formal argument
    {
        a=a1;
        b=b1;
        c=a+b;
        return c;
    }
};
int main()
{
    int a1,b1,result; //actual argument
    cout<<"Enter two digits:";
    cin>>a1>>b1;
    Fun obj;
    result=obj.Sum(a1,b1);
    cout<<"Sum is:"<<result;
    return 0;
}
