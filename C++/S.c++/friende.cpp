#include<iostream>
using namespace std;
class student
{

    int a,b;


friend void getdata(student &p);
   /* {
        cout<<"enter values"<<endl;
        cin>>p.a>>p.b;


    }*/
public:

    void show()
    {
        cout<<a<<" "<<b;
    }

};
 void getdata(student &p)
    {
        cout<<"enter values"<<endl;
        cin>>p.a>>p.b;


    }

int main()
{

    student s1;
    getdata(s1);
    s1.show();
}
