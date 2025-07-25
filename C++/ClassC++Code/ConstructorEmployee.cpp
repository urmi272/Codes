 #include<iostream>
using namespace std;
class Employee
{
int id;
string name;
float salary;
string Designation;
public:
Employee()
{
cout<<"Enter Id : "<<endl;
cin>>id;
cout<<"Enter Name : "<<endl;
cin>>name;
cout<<"Enter Designation : "<<endl;
cin>>Designation;
cout<<"Enter salary"<<endl;
cin>>salary;
}
Employee(int i, string n, string d, float s)
{
id=i;
name=n;
Designation=d;
salary=s;
}
void display()
{
cout<<"Emp id is: "<<id<<endl;
cout<<"Emp name is: "<<name<<endl;
cout<<"Emp Designation is: "<<Designation<<endl;
cout<<"Emp Salary is: "<<salary<<endl;
}
};

int main()
{
    int i;
    string n, d;
    float s;
cout<<"Enter Id : "<<endl;
cin>>i;
cout<<"Enter Name : "<<endl;
cin>>n;
cout<<"Enter Designation : "<<endl;
cin>>d;
cout<<"Enter salary"<<endl;
cin>>s;
Employee emp;
Employee emp1(i, n, d, s);
emp.display();
emp1.display();
return 0;
}
