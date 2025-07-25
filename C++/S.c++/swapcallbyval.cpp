#include<iostream>
using namespace std;
void swap(int,int);
int main()
{
    int a=10,b=20;
    cout<<"before swapping values are"<<endl;
    cout<<"a="<<a<<" "<<"b="<<b<<endl;
    swap(a,b);//calling by value
    cout<<"after swapping values are"<<endl;
    cout<<"a="<<a<<" "<<"b="<<b<<endl;
    return 0;
}
void swap(int a,int b)
{
  int c;
  c=a;
  a=b;
  b=c;
  cout<<"values inside swap are"<<endl;
  cout<<"a="<<a<<" "<<"b="<<b<<endl;

}
