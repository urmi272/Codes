#include<iostream>
using namespace std;
class OddEven
{
    int num;
public:
    void Set()
    {
        cout<<"Enter a number:";
        cin>>num;
    }
    void CheckEvenorOdd()
    {
        if(num%2==0)
           cout<<"Number is even:"<<num;
        else
           cout<<"Number is odd:"<<num;
    }
};
int main()
{
    OddEven obj1;
    obj1.Set();
    obj1.CheckEvenorOdd();
    return 0;
}
