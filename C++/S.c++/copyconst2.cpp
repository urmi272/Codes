#include<iostream>
using namespace std;
class Box
{
    int a,b;
public:
    /*Box()
    {
        a=10;
        b=20;
    }
    Box(int x)
    {
        a=b=x;
    }
    Box(Box &p)
    {
        a=p.a;
        b=p.b;
    }*/
    void show()
    {
        cout<<"a="<<a<<" "<<"b="<<b<<endl;
    }
};
int main()
{
    Box B1;
    //Box B2(100);
    Box B2=B1;
    //Box B4;
    //B4=B1;
    B1.show();
    B2.show();
    //B3.show();
    //B4.show();
}
