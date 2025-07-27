#include<iostream>
using namespace std;
class Student{
    int roll, marks;
    char name;
    public:
    Student(){ //default constructor must exist
        marks = 100;
    }
    Student(int r, int m, char n){
        roll=r;
        marks=m;
        name=n;
    }
    void showdata(){
        cout<<"Maximum marks is: "<<marks<<endl;
    }
    
    void showdata(int roll, int marks, char name){
        cout<<"Your roll no. is: "<<roll<<endl;
        cout<<"Your marks is: "<<marks<<endl;
        cout<<"Your name is: "<<name<<endl;
    }
};
int main (){
    Student s, s1, s2, s3;
    s.showdata();
    s1.showdata(123,99,'a');
    s2.showdata(124,79,'b');
    s3.showdata(125,85,'c');
}