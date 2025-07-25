#include<iostream>
using namespace std;
class Student
{
    int marks;
    string name;
    static int rollno;
public:
    Student(int m, string n)
    {
        marks=m;
        name=n;
        rollno++;
    }
    void show()
    {
        cout<<"Student name is:"<<name<<endl;
        cout<<"Student marks is:"<<marks<<endl;
        cout<<"Student rollno is:"<<rollno<<endl;
    }
    static void nextShowRollno()
    {
        rollno++;
        cout<<"Rollno of the next student:"<<rollno;
    }
};
int Student::rollno=100;
int main()
{
    Student s1(80,"ABC");
    s1.show();
    Student s2(89,"XYZ");
    s2.show();
    Student s3(60,"JKL");
    s3.show();
    Student::nextShowRollno();
    return 0;
}
