#include<iostream>
using namespace std;
class Female{
    public:
    void marraige(int age){
        if(age>=18){
        cout<<"your eligible for marraige"<<endl;
    }
    else{
        cout<<"your not allowed to marry yet!"<<endl;
    }
    }
};
class Male{
    public:
    void marraige(int age){
        if (age>=21){
        cout<<"your eligible for marraige"<<endl;
    }
    else{
        cout<<"your not allowed to marry"<<endl;
    }
    }
};
int main(){
    int a;
    Female f;
    Male m;
    cout<<"Enter your age: "<<endl;
    cin>>a;
    f.marraige(a);
    cout<<"Enter your age: "<<endl;
    cin>>a;
    m.marraige(a);
}