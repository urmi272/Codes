#include<iostream>
using namespace std;
int &fun(int &x);
int main()
{
    int a=10;
    int &p=fun(a);
    cout<<p;
    return 0;
}
int &fun(int &x)
{
  x++;
  return x;
}
