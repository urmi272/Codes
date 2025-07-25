// C++ program to calculate the area of a square and a circle

#include <iostream>
using namespace std;

class Shape {
   protected:
    float dimension;

   public:
    void getDimension() {
        cin >> dimension;
    }

    //virtual Function
    virtual float calculateArea()
    {
    cout<<"Shape";
    return 0;
    }
};

// Derived class
class Square : public Shape {
   public:
    float calculateArea() // overriding
    {
        return dimension * dimension;
    }
};

// Derived class
class Circle : public Shape {
   public:
    float calculateArea() //oveerridng
{
        return 3.14 * dimension * dimension;
    }
};

int main() {
    Shape *obj;
    Square square;
    Circle circle;
    obj=&square;
    cout << "Enter the length of the square: ";
    obj->getDimension(); // early binding
    cout << "Area of square: " << obj->calculateArea() << endl; //late binding
    obj=&circle;
    cout << "\nEnter radius of the circle: ";
    obj->getDimension(); // early binding
    cout << "Area of circle: " << obj->calculateArea() << endl;

    return 0;
}
