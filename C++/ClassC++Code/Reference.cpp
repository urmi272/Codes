#include<iostream>
using namespace std;
int main()
{
int a=100;
int &ref=a;
//int *ptr=&a;
cout<<"value of a is"<<a<<endl;		//100
cout<<"value of ref is"<<ref<<endl;	//100
//cout<<"value of ref is"<<*ptr<<endl; //100
//cout<<"value of ptr is"<<&ptr<<endl; // ML
cout<<"address of a is"<<&a<<endl;		//ML
cout<<"address of ref is"<<&ref<<endl;	//ML (same)
}
