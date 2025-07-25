#include<iostream>
using namespace std;

class Physics{
    protected:
    int marks;
    public:
    int dis(){
        cout <<"Enter phy marks: ";
        cin>>marks;
        return marks;
    }
};
class Chemistry{
    protected:
    int marks;
    public:
    int dis(){
        cout <<"Enter chem marks: ";
        cin>>marks;
        return marks;
    }
};
class Maths {
    protected:
    int marks;
    public:
    int dis(){
        cout <<"Enter maths marks: ";
        cin>>marks;
        return marks;
    }
};
class English{
    protected:
    int marks;
    public:
    int dis(){
        cout <<"Enter eng marks: ";
        cin>>marks;
        return marks;
    }
    
};
class Computer{
    protected:
    int marks;
    public:
    int dis(){
        cout <<"Enter comp marks: ";
        cin>>marks;
        return marks;
    }

};
class Marks: public Physics,public Chemistry,public Maths, public English, public Computer
{
    int roll, Marks;
    string name;
    public:
    void Total(){
            Marks = (Physics::dis()+ Chemistry::dis() +Maths::dis()+English::dis()+Computer::dis());
            cout<<"Avg is: "<<Marks/5;
            cout<<endl;
    }
    void Average(){
        int n;
        cout<<"Enter the no. of students: "<<endl;
        cin>>n;
        for(roll = 1; roll<(n+1); ++roll){
            cout<<"Roll num: "<<roll<<" ";
            cout<<"\nEnter your name: ";
            cin>> name;
            Total();
        }
    }

};
int main(){
    Marks M1;
    M1.Average();
    return 0;
}