#include <iostream>
using namespace std;
int main(){
    float num1, num2, sum, avg; //declaring variable
    cout<< "Enter two numbers:"; //prompt
    cin>> num1; /*read no. from keyboard*/
    cin>> num2;
    
    sum = num1 + num2;
    avg = sum/2;

    cout<<"Sum is = "<<sum<<"\n";
    cout<<"Average is = "<<avg<<"\n";
    return 0;
}