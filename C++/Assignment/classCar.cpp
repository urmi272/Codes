#include<iostream>
using namespace std;
class Car{
    string make;
    string model;
    int year;
    public:
    Car(const std::string m, const std::string mdl, int yr) //constructor
    {
       make = m;
       model = mdl;
       year = yr; 
    }
    string getMake(){ //define return type
        return make;
    }
    string getModel(){
        return model;
    }
    int getYear(){
        return year;
    }
};
int main()
{
    Car obj("Audi","A7", 2023);
    obj.getMake();
    cout<<"Make :"<<obj.getMake()<<endl;
    obj.getModel();
    cout<<"Model :"<<obj.getModel()<<endl;
    obj.getYear();
    cout<<"Year :"<<obj.getYear()<<endl;
    return 0;
}