//Function with return type and no argument
#include<iostream>
using namespace std;
class Fun
{
    int a,b,c;
public:
    void setData()
    {
        a=11;
        b=25;
    }
    int Sum()
    {
        c=a+b;
        return c;
    }
};
int main()
{
    int result;
    Fun obj;
    obj.setData();
    result=obj.Sum();
    cout<<"Sum is:"<<result;
    return 0;
}
