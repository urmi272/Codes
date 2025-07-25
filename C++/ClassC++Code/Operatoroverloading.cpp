#include <iostream>
using namespace std;
class Operator
{
    int a,b;
    public:
        void setData(int x, int y)
        {
        a=x;
        b=y;
        }
void showData()
        {
            cout << "a="<<a<<" b="<<b<<endl;
        }
Operator operator +(Operator c1)
{
    Operator a1;
    a1.a=a+c1.a;
    a1.b=b+c1.b;
    return a1;
}
};
int main ()
{
    Operator o1, o2, o3;
    o1.setData(5,7);
    o2.setData(9,8);
    o1.showData();
    o2.showData();
    //o3=o1.add(o2); // o3=o1+o2; .......... o3= o1.operator+(o2);
    //o3=o1+o2;
    o3= o1.operator+(o2);
    o3.showData();
}
