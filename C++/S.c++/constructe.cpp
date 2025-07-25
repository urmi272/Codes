#include<iostream>
using namespace std;
class student
{
    int a,b;
public:
    student()
    {
        cout<<"enter values for a and b";
        cin>>a>>b;

    }
    void showdata()
    {
        cout<<a<<" "<<b;
    }
};
int main()
{
    student s;
    s.showdata();
}

