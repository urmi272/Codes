#include<iostream>
using namespace std;
void add(int x,int y)
{
int c;
c=x+y;
cout<<"addition is "<<c;
}
int main()
{
int a,b;
cout<<"enter values of a and b :"<<endl;
cin>>a>>b;
add(a,b); // function calling
return 0;
}


