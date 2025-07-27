#include <iostream>
using namespace std;
int a = 10; //declaring global variable
int main(){
    int a = 30; //declaring local variable with same name as global
    cout<<"a = "<<a<<"\n"; //refer to local variable
    cout<<"a = "<<::a; //refer to global variable
    return 0;
}