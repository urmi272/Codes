#include<iostream>
using namespace std;
class Animal
{
public:
void eat(){
    cout<<"Eating"<<endl;
}
};
class Dog : public Animal
{
public:
    void eat() // Function overriding
    {
        cout<<"eating bread"<<endl;
    }
};
int main()
{
    Animal *obj;
    Dog d1;
    obj=&d1;
    obj->eat(); // late binding or dynamic binding
    return 0;
}
