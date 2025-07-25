//program on function with default arguements
#include<iostream>
using namespace std;
int sum(int a,int b=20);
int sum(int c);
int main()
{
  int a=5,b=10;
  cout<<sum(a,b);
  cout<<sum(10);
}
int sum(int a,int b)
{
  int c=a+b;
  return c;
}
int sum(int c)
{
    return c;
}
