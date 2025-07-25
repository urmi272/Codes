#include<iostream>
using namespace std;
class student
{
 int a;
 public:
void getdata(int x)
{
 a=x;
}
void show()
{
 cout<<a<<endl;
}
student operator +(student);
};
student student::operator +(student s2)
{
 student temp;
 temp.a=a+s2.a;
 return temp;
}
int main()
{
    student s1,s2,s3;
    s1.getdata(10);
    s2.getdata(20);
    s3=s1+s2;//s3=s1.operator(s2);    s3=s1.operator(s2);
    s1.show();
    s2.show();
    s3.show();

    return 0;
}
