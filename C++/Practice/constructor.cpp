#include<iostream>
using namespace std;
class Creature{
    int yearOfBirth;
    int *y;
    public:
    Creature(){
        cout<<"Default constructor called"<<endl;
        yearOfBirth = 1;
    }
    Creature(double year){
        cout<<"Parametrize constructor called"<<endl;
        yearOfBirth = year;
    }
    Creature(Creature &C){
        cout<<"Copy constructor called"<<endl;
        yearOfBirth = C.yearOfBirth;
    }
    Creature(int yr){
       cout<<"Dyanamic constructor called"<<endl;
        y = new int; 
        *y = yr;
       // cout<<*y;
    }
    int show(){
        return *y;
    }
    void dis(){
        cout<<yearOfBirth<<endl;
    }
    ~Creature(){
        cout<<"\nDestructor will called automaticlly, each time the constructor is called";
    }
};
int main(){
    Creature obj;
    obj.dis(); 
    Creature Z(obj);
    Z.dis();
    Creature obj1(20.22); //you can create prametric directly w/o creating a default
    obj1.dis();
    Creature Z1(obj1);
    Z1.dis();
    Creature ob(5);
    cout<<ob.show();
    return 0;
}