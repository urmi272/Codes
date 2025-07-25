// CPP program to illustrate
// concept of Containership

#include <iostream>
using namespace std;

class first {
public:
	void showf()
	{
		cout << "Hello from first class\n";
	}
};

// Container class
class second {
	// creating object of first
	first f;

public:
	// constructor
	second()
	{
		// calling function of first class
		f.showf();
	}
};

int main()
{
	// creating object of second
	second s;
}
