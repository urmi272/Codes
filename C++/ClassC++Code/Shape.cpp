#include<iostream>
using namespace std;

class Shape
{
public:
    int radius, l, b; // data members or variables or instance variable
    Shape() //default constructor
    {
        cout<<"Enter the radious:";
        cin>>radius;
    }
    Shape(float x, float y) // parameteraized comstructor
    {
        l=x;
        b=y;
    }
    void getAreaofCircle()
    {
        float area=3.14*radius*radius;
        cout<<"Area of circle is:"<<area<<endl;
    }
    void getAreaofRact()
    {
        float area=l*b;
        cout<<"Area of Ract:"<<area<<endl;
    }
};
int main()
{
    Shape c1;
    Shape c2(10, 20);
    cout<<"Size of C1:"<<sizeof(c1);
    c1.getAreaofCircle();
    c2.getAreaofRact();
    c1.getAreaofRact();
    c2.getAreaofCircle();
    return 0;
}

