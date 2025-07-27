#include<iostream>
using namespace std;

class Area{
    int length;
    int breadth;
    public:
    void setDim(int l, int b){
        length = l;
        breadth = b;
    }
    int getArea(){
        return (length*breadth);
    }
};

int main(){
    Area a;
    a.setDim(4,9);
    cout<<"the area of the rectangle: "<<a.getArea();
    return 0;
}