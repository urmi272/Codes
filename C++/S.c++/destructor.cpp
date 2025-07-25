#include<iostream>
using namespace std;
int count=0;
class student
{
   public:
       student()
       {
           count++;
           cout<<"no of object created="<<count<<endl;
       }
       ~student()
       {
           cout<<"no of object destroyed="<<count<<endl;
           count--;
       }
};
int main()
{
    cout<<"we are in main block"<<endl;
    student s1,s2,s3,s4;
    {
        cout<<"we are in block1"<<endl;
        student s5;
    }
    {
        cout<<"we are in block2"<<endl;
        student s6;
    }
    cout<<"re enter in main"<<endl;

}
