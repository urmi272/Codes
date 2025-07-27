#include<iostream>
using namespace std;
class EleA{
    int a=10, b=30;
    public:
    int c = a+b;
    int sum(){
        return a+b;
    }

};
class EleB : public EleA{
    public:
    void display(){
        cout<<"sum is: "<<sum();
    }
};
int main(){
    EleB ob;
    ob.display();
    return 0;
}