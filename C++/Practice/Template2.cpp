//****Class templates(generic class)****
#include<iostream>
using namespace std;
template <class T1=int, class T2=char> //u can set default return type
class MyClass{
    public:
    T1 a;
    T2 b;
    MyClass(T1 x, T2 y){
        a=x;
        b=y;
    }
    void showdata(){
        cout<<a<<endl<<b<<endl;
    }
};
int main(){
    MyClass<> obj(4,'&'); //u can pass default arguments
    obj.showdata();
    MyClass<int, char> obj1(7, 't');
    obj1.showdata();
    MyClass<char, double> obj2('g', 4.80);
    obj2.showdata();
    return 0;
}