// C++ program to implement
// the above approach
#include<iostream>
using namespace std;
class Employee
{
int id;
string name;
public:
void getdata();//Declaration of function
void putdata();//Declaration of function
};
void Employee::getdata(){//Defining of function
cout<<"Enter Id : ";
cin>>id;
cout<<"Enter Name : ";
cin>>name;
}
void Employee::putdata(){//Defining of function
cout<<id<<" ";
cout<<name<<" ";
cout<<endl;
}
int main(){
Employee emp; //One member
Employee emp1; //One member
emp.getdata();//Accessing the function
emp1.getdata();//Accessing the function
emp.putdata();//Accessing the function
emp1.putdata();//Accessing the function
return 0;

}
