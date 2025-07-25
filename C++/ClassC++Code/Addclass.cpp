#include<iostream>
using namespace std;
class Sum //Class start
{
private:
    int a,b,sum; // data members integer will take 4 Byte
public:
    void Takeinput() //member function definition
    {
        cout<<"Enter two numbers:";
    cin>>a>>b;
    }
    void Addition()
    {
        sum=a+b;
    cout<<"Sum of "<<a<<" and "<<b<<"is "<<sum;
    }
};
int main()
{
    Sum a1;
    a1.Takeinput(); // function calling or invoking
    a1.Addition();
    return 0;
}
