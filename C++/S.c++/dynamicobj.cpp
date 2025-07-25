// C++ program to implement
// dynamic objects
#include<iostream>
using namespace std;

// Class definition
class Test
{
	// Data members
	int a, b;
	public:

		// Constructor to initialize
		// data members of class
		Test()
		{
			cout << "Constructor is called" <<
					endl;
			a = 1;
			b = 2;
		};

		// Destructor
		~Test()
		{
			cout << "Destructor is called" <<
					endl;
		}

		// Function to print values
		// of data members
		void show()
		{
			cout << "a = " <<
					a << endl;
			cout << "b = " <<
					b << endl;
		}
};

// Driver code
int main()
{
	// pointer to object
	Test *ptr;

	// dynamic object creation
	ptr = new Test;

	// Accessing member through
	// pointer to object
	ptr->show();

	// Destroying object dynamically
	delete ptr;
	return 0;
}
