#include<iostream>
using namespace std;
class b;
class a
{
    int number;
    public:
    a(int x)
    {
        number=x;
    }
    void friend greatest(a a1,b b1);
};
class b
{
    int number;
    public:
    b(int x)
    {
        number=x;
    }
    void friend greatest(a a1,b b1);
};
void greatest(a a1,b b1)
{
    if(a1.number>b1.number){
        cout<<"\n Number in class A is greatest i.e. "<<a1.number<<endl;
    }
    else if(a1.number<b1.number){
        cout<<"\n Number in class B is greatest i.e. "<<b1.number<<endl;
    }
    else{
        cout<<"\n Number in both classes are equal";
    }
}
int main(){
    int num;
    cout<<"Enter number for class A - "<<endl;
    cin>>num;
    a a1(num);
    cout<<" Enter number for class B - "<<endl;
    cin>>num;
    b b1(num);

    greatest(a1,b1);
    cout<<"\n";
    return 0;
}