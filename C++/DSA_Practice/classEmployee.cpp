#include<iostream>
using namespace std;
class Employee{
    int s;
    int t;
    public:
    void getInfo(int salary, double time){
        s = salary;
        t = time;
    }
    void AddSal(){
        if (s<=500){
            s += 10;
             cout<<"Your Monthly salary: "<<s<<endl;
        }
        else{
            cout<<"Your Monthly salary: "<<s<<endl;
        }
    }
    void AddWork(){
        if (t>=6){
            s += 5;
            cout<<"Your salary after extra work: "<<s<<endl;
        }
    }
};
int main(){
    Employee e1, e2;
    e1.getInfo(100, 7.0);
    e1.AddSal();
    e1.AddWork();
    e2.getInfo(700, 4.0);
    e2.AddSal();
    e2.AddWork();
    return 0;
}