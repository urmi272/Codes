#include<iostream>
using namespace std;
class B;
class A{
    int a;
    public:
    A(int x){a=x;}
    friend void max(A obj, B obj2);
};
class B{
    int b;
    public:
    B(int y){b=y;}
    friend void max(A obj, B obj2);
};
void max(A obj, B obj2){
    if (obj.a > obj2.b){
        cout<<obj.a<<" is greater";
    }
    else if (obj.a==obj2.b){
        cout<<"equal";
    }
    else
    cout<<obj2.b<<" is greater";
};
int main(){
    A ob1(10);
    B ob2(20);
    max(ob1, ob2);
    return 0;
}