#include<iostream>
using namespace std;
void swap(int*,int*);
int main()
{
    int a=10,b=20;
    cout<<"before swapping values are"<<endl;
    cout<<"a="<<a<<" "<<"b="<<b<<endl;
    swap(&a,&b);//calling by reference
    cout<<"after swapping values are"<<endl;
    cout<<"a="<<a<<" "<<"b="<<b<<endl;
    return 0;
}
void swap(int *p,int *q)
{
  int c;
  c=*p;
  *p=*q;
  *q=c;

}
