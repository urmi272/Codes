#include<iostream>
using namespace std;
class Cal{
    int a , b;
    public:
    Cal(int x=0, int y=0){
        a =x;
        b =y;
    }
    void divison(){
        cout<<"a is "<<a<<"\nb is "<<b;
    }
    Cal operator/(Cal obj){
        obj.a = a/obj.a;
        obj.b = b/obj.b;
        return obj;
    }
};
int main(){
    Cal c1(10,60), c2(5,20), c3;
    c3 = c1/c2;
    c3.divison();

    return 0;
}