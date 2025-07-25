#include <iostream>
using namespace std;
int main(){
int age;
cout<<"enter age";
cin>>age;
switch (age){
case 18:
    cout<<"18";
    break; // it's use so that the program ends
    //and need not to move to other cases
case 6:
     cout<<"6";
     break;
case 28:
     cout<<"28";
     break;

default:
cout<<"no special case";
    break;
}
}