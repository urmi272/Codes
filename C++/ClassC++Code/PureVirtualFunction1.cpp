#include<iostream>
using namespace std;
class Vehicle
{
public:
    virtual void calculateSpeed()=0; // Pure virtual fucntion
};
class Car : public Vehicle
{
public:
    void calculateSpeed()
    {
        cout<<"Speed of car is 80Kmph"<<endl;
    }
};
class Bike : public Vehicle
{
public:
    void calculateSpeed()
    {
        cout<<"Speed of Bike is 60Kmph"<<endl;
    }
};
class Cycle : public Vehicle
{
public:
    void calculateSpeed()
    {
        cout<<"Speed of Cycle is 4Kmph"<<endl;
    }
};
int main()
{
    Vehicle *obj; // object pointer
    Car c1;
    Bike b1;
    Cycle c11;
    obj=&c1;
    obj->calculateSpeed(); // late binding
    obj=&b1;
    obj->calculateSpeed();
    obj=&c11;
    obj->calculateSpeed();
    return 0;
}
