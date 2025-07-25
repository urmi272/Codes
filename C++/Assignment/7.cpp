#include <iostream>
using namespace std;
class Complex{
    double real;
    double imaginary;
public:
    Complex(){
        real = 0;
        imaginary = 0;
    }
    friend ostream& operator<<(ostream& os, const Complex& c) {
        os << c.real << " + " << c.imaginary << "i";
        return os;
    }
    friend istream& operator>>(istream& is, Complex& c) {
        cout << "Enter real part: ";
        is >> c.real;
        cout << "Enter imaginary part: ";
        is >> c.imaginary;
        return is;
    }
};
int main() {
    Complex c1, c2;
    cin >> c1;
    cout << "Entered complex number: " << c1 <<endl;
    return 0;
}