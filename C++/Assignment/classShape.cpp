#include<iostream>
using namespace std;
class Shape{
    public:
    int getArea(int x){
        cout<<"Area of Circle is: "<<3.14*x*x<<endl;
        return 0;
    }
    inline void getArea(double y){
        cout<<"Area of Square is: "<<y*y<<endl;
    }
    int getArea(int a, int b){
        cout<<"Area of Rectangle is: "<<a*b<<endl;
        return 0;
    }
    inline void getArea(double p, double q){
        cout<<"Area of Triangle is: "<<0.5*p*q;
    }
};
int main()
{
    Shape obj1, obj2, obj3, obj4;
    obj1.getArea(3);
    obj2.getArea(2.5);
    obj3.getArea(15,10);
    obj4.getArea(5.0, 10.0);
    return 0;
}