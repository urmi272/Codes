#include<iostream>
using namespace std;
class Student{
    string name;
    int roll_no;
    public:
    Student(string n, int r){
        name = n;
        roll_no = r;
    }
    void display(){
        cout<<"name is "<<name<<endl;
        cout<<"roll no. is "<<roll_no<<endl;
    }
};
int main(){
    Student s("John", 2);
    s.display();
    return 0;
}