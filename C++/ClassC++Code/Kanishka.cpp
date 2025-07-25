#include<iostream>
using namespace std;
class Rectangle
{
public:
    double length, width;
Rectangle(double l, double w)
{
    length=l;
    width=w;
}
    double getArea(int length, int width)
    {
        double area=length*width;
        return area;
    }
};
int main()
{
    Rectangle s(5,7);
    cout<<"Area of Rect is:"<<s.getArea(9,7)<<endl;

}
