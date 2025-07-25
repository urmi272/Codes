// C++ program to overload the binary operator +
// This program adds two complex numbers

#include <iostream>
using namespace std;

class Complex {
   private:
    float real;
    float imag;

   public:
    // Constructor to initialize real and imag to 0
    Complex()
    {
       real=0;
       imag=0;
    }

    void input() {
        cout << "Enter real and imaginary parts respectively: ";
        cin >> real;
        cin >> imag;
    }

    // Overload the + operator
    Complex operator + (const Complex obj) {
        Complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }

    void output()
    {

            cout << "Output Complex number: " << real << "+" << imag << "i";
    }
};

int main() {
    Complex comp1, comp2, result;

    cout << "Enter first complex number:\n";
    comp1.input();

    cout << "Enter second complex number:\n";
    comp2.input();

   // complex1 calls the operator function
   // complex2 is passed as an argument to the function
    result = comp1 + comp2;
    result.output();

    return 0;
}
