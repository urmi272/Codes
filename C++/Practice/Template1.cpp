//template function
#include<iostream>
using namespace std;
template <class T1, class T2>
void show(T1 t1, T2 t2){
    cout<<"1st element: "<<t1<<endl;
    cout<<"2nd element: "<<t2<<endl;
}
int main(){
    show(3, 2.1);
    show(4.3, 5);
    show(8.5, 5.3);
    show<double , int>(8.9, 5.3);//templates allows you to decide at compile type
    return 0;
}
//Note: generic func. can't be overloaded it te function have different funtionalitise