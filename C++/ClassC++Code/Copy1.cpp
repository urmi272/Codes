#include<iostream>
using namespace std;

class Shape
{
public:
    int l, b; // data members or instance variable
    Shape(int x, int y) // parameteraized comstructor
    {
        l=x;
        b=y;
    }
    void getAreaofRect()
    {
        float area=l*b;
        cout<<"Area of Rect:"<<area<<endl;
    }
    Shape (Shape &obj) //copy constructor with return type class
    {
        l=obj.l;
        b=obj.b;
    }
};
int main()
{
    Shape c1(10,20);
    Shape c2=c1; // c2(c1); integer float double character :- predefine datatype or premitive datatype and class user defined datatpye
    c1.getAreaofRect();
    c2.getAreaofRect();
    return 0;
}

