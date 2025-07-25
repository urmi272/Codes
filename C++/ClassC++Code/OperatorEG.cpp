#include<iostream>
using namespace std;
class Sum
{
    int a, b;
public:
    void setData(int x, int y)
    {
        a=x;
        b=y;
    }
    void showData()
    {
        cout<<"a="<<a<<" b="<<b<<endl;
    }
    void operator+(Sum s)
    {
        Sum temp;
         temp.a= a+s.a;
         temp.b= b+s.b;
         cout<<"a="<<temp.a<<" b="<<temp.b<<endl;
    }
};
int main()
{
    Sum s1, s2;
    s1.setData(5,7);
    s2.setData(7,9);
    s1.showData();
    s2.showData();
   // s3=s1.add(s2);
   // s3=s1.operator +(s2);
   s1+s2;
   // s3.showData();
}
