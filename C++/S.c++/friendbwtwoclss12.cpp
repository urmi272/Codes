#include<iostream>
using namespace std;
class B;//forward declaration
 class A
{

    int a,b;

public:
     void getdata()
    {
        cout<<"enter values"<<endl;
        cin>>a>>b;

    }
    void show()
    {
        cout<<a<<" "<<b<<endl;
    }
    friend void swap(A &p, B &q);
};
 class B
{

    int a,b;

public:
     void getdata()
    {
        cout<<"enter values"<<endl;
        cin>>a>>b;

    }
    void show()
    {
        cout<<a<<" "<<b<<endl;
    }
    friend void swap(A &p, B &q);
};
void swap(A &p,B &q)
{
    int c;
    c=p.a;
    p.a=q.a;
    q.a=c;
    c=p.b;
    p.b=q.b;
    q.b=c;
}
int main()
{

    A obj1;
    B obj2;
    obj1.getdata();
    cout<<"before swapping values of A class is"<<endl;
    obj1.show();
    obj2.getdata();
    cout<<"before swapping values of B class is"<<endl;
    obj2.show();
    swap(obj1,obj2);
    cout<<"after swapping values of A class is"<<endl;
    obj1.show();
    cout<<"after swapping values of B class is"<<endl;
    obj2.show();
}
