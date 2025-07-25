#include<iostream>
using namespace std;

class Circle
{
public:
    float radius;
    Circle()
    {
        cout<<"Enter the radious:";
        cin>>radius;
    }
    void getArea()
    {
        float area=3.14*radius*radius;
        cout<<"Area of circle is:"<<area;
    }
};
int main()
{
    Circle c1;
    c1.getArea();
    return 0;
}
