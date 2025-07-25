#include<iostream>
using namespace std;
class A{
    int a;
    public:
    void getdata();
    void showdata();
    friend A operator *(A ob2, A ob1); //Binary operator * overloaded friend function,
    // which takes two object of A and returns an object of A type.
};
void A :: getdata(){
    cout<<"enter a num: "<<endl;
    cin>>a;
}
void A :: showdata(){
    cout<<"Value is: "<<a;
}
A operator *(A ob2, A ob1){
    A temp;
    temp.a = ob1.a*ob2.a;
    return temp;
}

int main(){
    A a1,a2,a3;
    a1.getdata();
    a2.getdata();
    a3 = a1*a2;
    a3.showdata();
    return 0;
}