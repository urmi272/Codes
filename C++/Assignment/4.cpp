#include<iostream>
using namespace std;
class complex {
  float real;
  float imag;
  public:
  complex() {
    real = 0;
    imag = 0;
  }
  complex(float r, float i) {
    real = r;
    imag = i;
  }
  void set(float r, float i) {
    real = r;
    imag = i;
  }
  void disp() {
    cout << real << " + " << imag << "i" << endl;
  }
  complex sum(complex c) {
    complex temp;
    temp.real = real + c.real;
    temp.imag = imag + c.imag;
    return temp;
  }
};
int main() {
  complex c1(2, 3), c2(4, 5), c3;
  c3 = c1.sum(c2);
  cout << "c1 = ";
  c1.disp();
  cout << "c2 = ";
  c2.disp();
  cout << "c3 = ";
  c3.disp();
  return 0;
}