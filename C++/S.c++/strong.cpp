#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int sum=0;
    int t=a;
    while(a>0)
    {
        int rem;
        rem=a%10;
        int f=1;
        while(rem>0)
        {
            f=f*rem;
            rem--;
        }
        sum=sum+f;
        a=a/10;
    }
    if (sum==t)
        cout<<"the number is strong";
    else
        cout<<"the number is not strong";
    return 0;
}
