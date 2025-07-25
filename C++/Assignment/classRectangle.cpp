#include <iostream>
using namespace std;
class Rectangle {
  float length;
  float width;
  public:
  void setlength(float len) {
    length = len;
  }
  void setwidth(float wid) {
    width = wid;
  }
  float perimeter() {
    return 2 * (length + width);
  }
  float area() {
    return length * width;
  }
  void show() {
    cout<<"\nLength: "<<length<<"  Width: "<<width<<endl;
  }
  //Same Area returns 1 if the two Rectangles have the same area
  //and returns 0 if they don't
  int sameArea(Rectangle r) {
    return area() == r.area();
  }
};
int main() {
  Rectangle r1,r2;
  r1.setlength(5);
  r1.setwidth(2.5);
  r2.setlength(5);
  r2.setwidth(18.9);
  cout << "\nFirst rectangle: ";
  r1.show();
  cout<<"Area: " <<r1.area()<<"\nPerimeter: "<<r1.perimeter()<<endl;
  cout<<"\nSecond rectangle: ";
  r2.show();
  cout<<"Area: "<<r2.area()<< "\nPerimeter: "<<r2.perimeter()<<endl;
  if (r1.sameArea(r2)) {
    cout<<"\nThe two rectangles have the same area."<<endl;
  }
  else {
    cout<<"\nThe two rectangles do not have the same area."<<endl;
  }

  r1.setlength(15);
  r1.setwidth(6.3);
  cout << "\nFirst rectangle: ";
  r1.show();
  cout<<"Area: "<<r1.area()<<"\nPerimeter: "<<r1.perimeter()<<endl;
  cout<<"\nSecond rectangle: ";
  r2.show();
  cout<<"Area: "<<r2.area()<<"\nPerimeter: "<<r2.perimeter()<<endl;
  if (r1.sameArea(r2)) {
    cout << "\nThe two rectangles have the same area."<<endl;
  }
  else {
    cout<<"\nThe two rectangles do not have the same area."<<endl;
  }
  return 0;
}