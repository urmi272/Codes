#include<iostream>
using namespace std;
class num{
    int a, b;
    public:
     int c;
     double d;
     void get(int a1, int b1);//declaring
     void getdata(){
        cout<<"the value of a : "<<a<<endl;
        cout<<"the value of b : "<<b<<endl;
        cout<<"the value of c : "<<c<<endl;
        cout<<"the value of d : "<<d<<endl;
    }
};
void num::get(int a1, int b1)//defining
{
     a = a1;
     b = b1;
}
int main(){
    num n;
    // n.a= 4; //cant access private member
    n.c=3;
    n.d=4.5;
    n.get(2,5);//u can access them through function
    n.getdata();
    return 0;
}//one func can access private private member of other function if they are declared in the SAME class!