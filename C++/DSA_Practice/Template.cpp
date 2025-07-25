//♥♥♥♥Function template♥♥♥♥
#include<iostream>
using namespace std;
template <class temp>
temp data(temp t1, temp t2){
    temp T = t1+t2;
    return T;
}

int main(){
    cout<<data(4,7)<<endl;// both of them have to be same return type
    cout<<data(4.1,7.2)<<endl;// bc we have created one template type
    return 0;
}
//Note: generic func. can't be overloaded it te function have different funtionalitise