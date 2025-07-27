#include <iostream>
using namespace std;
class Complex{
    int a,b;
    public:
    Complex(int x=0, int y=0){
        a=x;
        b=y;
    }
    void display(){
        cout<<a<<"i +"<<b<<"j"<<endl;
    }
    Complex operator+(Complex &p){
        Complex temp;
        temp.a = a+p.a;
        temp.b = b+p.b;
        return temp;
    }
};
int main(){
    Complex obj1(1,5), obj2(3,6), obj3;
    obj3= obj1.operator+(obj2);
    //obj3 = obj1+obj2;
    obj3.display();
    return 0;
}