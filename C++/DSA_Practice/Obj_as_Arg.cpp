#include<iostream>
using namespace std;
class Cal{
    int a;
    public:
    void set(int z){
        a =z;
        cout<<"the value is: "<<a<<endl;
    }
    // void sum(Cal x, Cal y) //pass by Value
    // {
    //     a = x.a + y.a;
    //     cout<<"Sum is: "<<a;
    // }
    void sum(Cal &x, Cal &y) //pass by Reference
    {
        a = x.a + y.a;
        cout<<"Sum is: "<<a;
    }
};
int main(){
    Cal O1,O2,O3;
    O1.set(3);
   
    O2.set(7);

    O3.sum(O1, O2);
    return 0;
}