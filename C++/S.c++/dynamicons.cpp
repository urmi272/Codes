#include<iostream>
#include<string.h>
using namespace std;
class student
{
    int roll;
    char *name;
    int length;
public:

    student(char *s,int r)
    {
        length=strlen(s);
        name=new char [length+1];
        strcpy(name,s);
        roll=r;
    }
    void display()
    {
        cout<<"name="<<name<<" "<<"roll="<<roll<<endl;
    }
};
int main()
{
    student s1("ram",101);
    student s2("rahul",102);
    s1.display();
    s2.display();

}
