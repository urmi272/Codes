#include <iostream>
using namespace std;

class Complex
{
private:
	int real, imag;
public:
	Complex(int r = 0, int i =0)
	{
	    real = r;
	    imag = i;
    }
	friend ostream & operator << (ostream &out, const Complex &c);

	friend istream& operator >> (istream &in, Complex &c);
};

ostream & operator << (ostream &output, const Complex &c)
{
	output << c.real;
	output << c.imag << "+i" << endl;
	return output;
}
istream& operator >> (istream &input, Complex &c) //istream bc arg is cin and classname bc we're passimg object
{
	cout << "Enter Real Part: ";
	input >> c.real;
	cout << "Enter Imaginary Part: ";
	input >> c.imag;
	return input;
}

int main()
{
Complex c1;
cin >> c1 ; // operator >> (cin,c1)
cout << "The complex object is ";
cout << c1; // operator << (cout, c1 )
return 0;
}


