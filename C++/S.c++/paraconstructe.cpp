#include<iostream>
#include<string.h>
using namespace std;
class student
{
    int roll_no;
    float marks;
    char name[10];
public:
    student(int r,float m,char *p)
    {
       roll_no=r;
       marks=m;
       //name=n;

       //strcpy(name,n);
       /*for(int i=0;n[i]!='\0';i++)
       {
           name[i]=n[i];
       }*/
       int i=0;
       while(*p!='\0')
       {
           name[i]=*p;
           p++;
           i++;
       }

    }
    void showdata()
    {
        cout<<"roll no="<<roll_no<<endl<<"marks="<<marks<<endl<<"name="<<name<<endl;
    }
};
int main()
{
    student s(101,67,"ram");
    s.showdata();
}

