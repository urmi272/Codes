#include<iostream>
using namespace std;
class student
{
    int a;
public:
    void getdata()
    {
        cout<<"enter value for a"<<endl;
        cin>>a;
    }
    void show()
    {
        cout<<a<<endl;
    }
    int operator++()
    {
        ++a;
        return a;
    }
};
int main()
{
    student s;
    int res;
    s.getdata();
    cout<<"value of a before overloading="<<endl;
    s.show();
    res=++s;// s.operator();
    cout<<"value of a after overloading="<<endl;
    s.show();
    cout<<"res="<<res;
}
