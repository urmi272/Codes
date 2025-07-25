#include<iostream>
using namespace std;
void fact(){
    int x;
    cout<<"Enter a number: ";
    cin>>x;
    for(int i=x-1;i>0; i--)  //initialization;condition;increment/decrement
    {
        x=x*i;
    }
    cout<<"Factorial of the given number is: "<<x<<endl;
}
int main(){
    fact();
    fact();
    fact();
    fact();
    fact();
    return 0;
}