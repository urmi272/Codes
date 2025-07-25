#include<iostream>
using namespace std;
union uni{
    int a;
    char b;
};
int main(){
    uni u1;
    u1.a = 100; //1 obj will store 1 memory so,
    u1.b = 'x'; //so initial value will show garbage value 
    u1.a = 3; // as soon the new value replace the prev. memory
    cout<<u1.a<<endl; //but it's meamory efficient
    cout<<u1.b<<endl;

    // uni u1, u2; //this will show real values
    // u1.a = 10;
    // u2.b = 'c';
    // cout<<u1.a<<endl;
    // cout<<u2.b<<endl;
    // return 0;
}