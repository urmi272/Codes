#include<iostream>
using namespace std;
class A{
    int a;
    int b;
    public:
    A(int x, int y){
        a=x;
        b=y;
    }
    A(A &p){ //creating copy constructor by passing obj as argument 
        a = p.a;
        b = p.b;
    }
    void showdata(){
        cout<<"value of a: "<<a<<endl;
        cout<<"value of b: "<<b<<endl;
    }
};
int main(){
    A ob(2,6);
    ob.showdata();
    cout<<"copy constructor is called"<<endl;
    A ob2(ob);
    // A ob2=ob;
    ob2.showdata();
    return 0;
}