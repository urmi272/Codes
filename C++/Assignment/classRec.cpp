#include<iostream>
using namespace std;
class Rectangle{
    double length;
    double width;
    public:
    Rectangle(){
        length = 0, width = 0;
    }
    Rectangle(int l, int w){
        length = l;
        width = w;
    } 
double getArea(){
    return length*width;
}
};
int main(){
    Rectangle rec(25,5);
    cout<<"Area of the Rectangle is: "<<rec.getArea();
    return 0;
}