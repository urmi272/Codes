#include <iostream>
using namespace std;
class Demo
{
	private:
		int a;
	public:
		void set(int x)
		{
			a = x;
		}
		void sum(Demo &ob1, Demo &ob2) // function which taking object as an arguments
		{
			a  = ob1.a + ob2.a;
		}
		void print()
		{
			cout<<"Value of A :  "<<a<<endl;
		}
};
int main()
{
	//object declarations
	Demo d1;
	Demo d2;
	Demo d3;
	//assigning values to the data member of objects
	d1.set(10);
	d2.set(20);

	//passing object d1 and d2
	d3.sum(d1,d2);

	//printing the values
	cout<<"Value of d1's object:";
	d1.print(); //10
	cout<<"Value of d2's object:";
	d2.print(); //20
	cout<<"Value of d3's object:";
	d3.print(); //30

	return 0;
}

