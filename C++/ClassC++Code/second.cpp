
//First Program

#include<iostream>
using namespace std;
int main() // main function start
{
int n, i, fact=1;
cout<<"Enter a number:"<<endl;
cin>>n;
for(i=1;i<=n;i++)
{
    fact=fact*i;
}
cout<<"Factorial is:"<<fact<<endl;
return 0;
}
