#include <iostream>
using namespace std;
class operation
{
	int a,b,add,sub,mul;
	float div;
public:
inline void get()
{
	cout << "Enter first value:";
	cin >> a;
	cout << "Enter second value:";
	cin >> b;
}
inline void sum()
	{
	    add = a+b;
	cout << "Addition of two numbers: " << add << "\n";
	}
inline	void difference()
	{
	    sub = a-b;
	cout << "Difference of two numbers: " << sub << "\n";
	}
inline	void product()
	{
	    mul = a*b;
	cout << "Product of two numbers: " << mul << "\n";
	}
inline	void division()
	{
	    div=a/b;
	cout<<"Division of two numbers: "<<div<<"\n" ;
	}
};

int main()
{
	operation s;
	s.get();
	s.sum();
	s.difference();
	s.product();
	s.division();
	return 0;
}

