#include<iostream>
using namespace std;
int *fun(int *);
int main()
{
    int a=10;
    int *p;
    //p=fun(&a);//calling by reference and function returning pointer
    //cout<<*p;
    cout<<*(fun(&a));
    return 0;

}
int *fun(int *x)
{
  (*x)++;
  cout<<*x<<endl;
  return x;
}
