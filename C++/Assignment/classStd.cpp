#include<stdio.h>
#include<iostream>
using namespace std;
class Student{
    int admno;
    string sname;
    float english,maths,science;
    float total;
    public:
        float ctotal(){
        total=(english+maths+science);
        return(total);
        }
        void Takedata(){
            cout<<"Enter Admission no:";
            cout<<"\nName: ";
            cout<<"\nEnglish marks: ";
            cout<<"\nScience marks: ";
            cout<<"\nMaths marks: "<<endl;
            cin>>admno;
            cin>>sname;
            cin>>english;
            cin>>science;
            cin>>maths;
        }
        Student(): total(0.0){
        }
        friend float func(Student);
        void Showdata(){
            cout<<"\nAdmission no: "<<admno<<endl;
            cout<<"Student Name: "<<sname<<endl;
            cout<<"English marks: "<<english<<endl;
            cout<<"Science marks: "<<science<<endl;
            cout<<"Maths marks: "<<maths<<endl;
        }
};
int main(){
    Student s1;
    s1.Takedata();
    s1.Showdata();
    cout<<"\nTotal Marks is:"<<s1.ctotal();
    return 0;
}