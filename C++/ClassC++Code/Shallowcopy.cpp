#include <iostream>

using namespace std;

class Demo
{
    int a;
    int b;
    int *p;
    public:
    Demo() //default constructor
    {
        p=new int; //dynamic memory allocation
    }
    void setdata(int x,int y,int z)
    {
        a=x;
        b=y;
        *p=z;
    }
    void showdata()
    {
        cout << "value of a is : " <<a<< endl;
        cout << "value of b is : " <<b<< endl;
        cout << "value of *p is : " <<*p<< endl;
    }
};
int main()
{
  Demo d1;
  d1.setdata(4,5,7);
  Demo d2 = d1; //calling of copy constructor
  d1.showdata();
  d2.showdata();
    return 0;
}
