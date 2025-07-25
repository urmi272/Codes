#include<iostream>
using namespace std;
class Student
{
public:
int stId;
int stAge;
string stName;

Student() // default constructor
{
 stId=101;
stAge=25;
stName="Ravi";
}

// In this function we returning the student object
Student input(int n, int a, string s) // function with arguments and return type
{
Student obj;
obj.stId = n;
obj.stAge = a;
obj.stName = s;
return obj;
}

// In this function we pass object as an argument
void display()
{
cout << "Name = " << stName << endl;
cout << "Id = " <<stId << endl;
cout << "Age = " << stAge << endl;
 }
};
 int main()
{
Student s;

s = s.input (1005, 20, "James");

s.display();


return 0;
}
