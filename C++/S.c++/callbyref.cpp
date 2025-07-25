//program on call by reference
#include<iostream>
using namespace std;
int fun(int);
int main()
{
    int a=10;
    int p;
    p=fun(a);//calling by value
    cout<<p<<endl;
    cout<<a;
    return 0;
}
int fun(int a)
{
  a++;
  cout<<a<<endl;
  return a;
}
