// C++ program to calculate the area of a square and a circle

#include <iostream>
using namespace std;

// Abstract class
class Shape {
   protected:
    float dimension;

   public:
    void getDimension() {
        cin >> dimension;
    }

    // pure virtual Function
    virtual float calculateArea()=0; // declaring the function body of the function need not to define
};

// Derived class
class Square : public Shape {
   public:
    float calculateArea() {
        return dimension * dimension;
    }
};

// Derived class
class Circle : public Shape {
   public:
    float calculateArea() {
        return 3.14 * dimension * dimension;
    }
};

int main()
 {
    Shape *obj;
    Square square;
    Circle circle;
    obj=&square;
    cout << "Enter the length of the square: ";
    obj->getDimension();
    cout << "Area of square: " << obj->calculateArea() << endl;
    obj=&circle;
    cout << "\nEnter radius of the circle: ";
    obj->getDimension();
    cout << "Area of circle: " << obj->calculateArea() << endl;

    return 0;
}
