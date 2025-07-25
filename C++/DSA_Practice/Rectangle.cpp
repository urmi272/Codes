#include<iostream>
using namespace std;
class Rectangle{
    float length, width;
    public:
    void setlenght(float l){
        length = l;
    }
    void setwidht(float w){
        width = w;
    }
    void show(){
        cout<<"lenght: "<<length;
        cout<<"width: "<<width;
    }
    float perimeter(){
        int x;
        x = 2*(length+width);
        return x;
    }
    float area(){
        int y;
        y = length*width;
        return y;
    }
    int sameArea(Rectangle r){
       if (area()==r.area()){
        cout<<"both rec have same area";
        return 1;
        }
        else 
        cout<<"don't have same area";
        return 0;
    }
};
int main(){
    Rectangle rec1, rec2;
    rec1.setlenght(5.0);
    rec1.setwidht(2.5);
    rec1.show();
    rec1.perimeter();
    rec1.area();

    rec2.setlenght(5.0);
    rec2.setwidht(18.9);
    rec2.show();
    rec2.perimeter();
    rec2.area();

    rec1.sameArea(rec2);

    rec1.setlenght(15);
    rec1.setwidht(6.3);
    rec1.show();
    rec1.sameArea(rec2);

    return 0;
}