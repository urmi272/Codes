/*  C++ Program to Swap two numbers using call by value  */

#include<iostream>
using namespace std;

void swap(int a,int b); // function declaration

int main()
{
        int a,b;
        cout<<"Enter Value Of A :: ";
        cin>>a;
        cout<<"\nEnter Value of B :: ";
        cin>>b;

        cout<<"\nBefore Swapping, Value of :: \n\tA = "<<a<<"\tB = "<<b<<"\n";

        swap(a,b); //These a and b are actual arguments

        cout<<"\nOutside Function After Swapping, Value of :: \n\tA = "<<a<<"\tB = "<<b<<"\n";
}


void swap(int a,int b) //function definition here a and b are formal arguments
{
        int temp;
        temp=a;
        a=b;
        b=temp;
        cout<<"\nInside Function After Swapping, Value of :: \n\tA = "<<a<<"\tB = "<<b<<"\n";
}
