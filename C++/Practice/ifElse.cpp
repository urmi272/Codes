#include <iostream>
using namespace std;
void age();
int main(){
    age();
    return 0;
}
void age(){
    int age;
    cout<<"Tell me your age: ";
    cin>>age;
    if((age<18) && (age>=0)) //wo this, compiler could've also consider zero or negative age
    {
        cout<<"Your're underage! You cannot come to the party";
    }
    else{
        cout<<"You can come to the party";
    }
}