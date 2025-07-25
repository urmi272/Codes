#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    for(int c=1;c<=a;c=c*10)
    {
        int sum=0
        int d,rem;
        d=a/c;
        rem=d%10;
        for(int i=rem;i>0;i--)
        {
            int e;
            e=1;
            e = e*i;
        }
        sum += e;
    }
    if (sum==a)
        cout<<"the number is strong";
    else
        cout<<"the number is not strong";
    return 0;
}
