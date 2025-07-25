//program on public access specifier
#include<iostream>
using namespace std;
class student
{

    protected:
    int a,b;

    public:
    void getdata()
    {
        cout<<"enter values for a and b"<<endl;
        cin>>a>>b;

    }
    void showdata();

};
void student :: showdata()
{
    cout<<"a="<<a<<" "<<"b="<<b;

}
int main()
{

    student s;
    s.getdata();
    s.showdata();
    s.a=30;
    s.b=60;
    return 0;
}
