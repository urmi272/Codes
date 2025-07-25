#include<iostream>
using namespace std;
class student
{
    int roll;
    float marks;
    char name[10];
public:
    void getdata()
    {

        cin>>roll>>marks>>name;


    }
    void showdata()
    {
        cout<<"roll="<<roll<<" "<<"marks="<<marks<<" "<<"name="<<name<<endl;
    }
};
int main()
{
    student s[5];//array of objects

 for(int i=0;i<5;i++)
    {
        cout<<"enter value for object "<<i+1<<endl;
        s[i].getdata();
    }
    for(int i=0;i<5;i++)
    {
        cout<<"value for object "<<i+1<<endl;
        s[i].showdata();
    }
}
