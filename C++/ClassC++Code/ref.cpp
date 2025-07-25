#include<iostream>
using namespace std;
int main()
{
int a=100;
int &ref=a;
cout<<"value of a is"<<a<<endl;
cout<<"value of ref is"<<ref<<endl;
cout<<"address of a is"<<&a<<endl;
cout<<"address of a is"<<&ref<<endl;
return 0;
}

