#include<iostream>
using namespace std;
class A{
    int a;
    public:
        A(){
            a = 5;
        }
    friend class B;
};
class B{
    int b;
    public:
    B(){
        b= 3;
    }
    void grt(){
        A a1; //create obj of class A for calling class A's data in Class B
        if(a1.a>b)
        {
            cout<<"a is greater";
        }
        else {
            cout<<"b is greater";
        }
    }
};
int main(){
    B b1;
    b1.grt();
}