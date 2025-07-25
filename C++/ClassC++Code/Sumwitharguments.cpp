#include<iostream>
using namespace std;
class Sum //Class start
{
private:
    int a,b,sum; // data members integer will take 4 Byte
public:
    void Takeinput(int x, int y) //member function definition
    {
    a=x;
    b=y;
    }
    void Addition()
    {
        sum=a+b;
    cout<<"Sum of "<<a<<" and "<<b<<" is: "<<sum;
    }
};
int main()
{
    int x,y;
    cout<<"Enter two numbers:";
    cin>>x>>y;
    Sum a1;
    a1.Takeinput(x, y); // function calling or invoking
    a1.Addition();
    return 0;
}
