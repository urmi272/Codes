#include <iostream>
using namespace std;

class Counter
{
	private:
	    //static data member as count
		static int count;

	public:
		static void set()
		{
		    count++;
        }
        static void Print()
		{
			cout<<"\nTotal objects are: "<<count;
		}
};

//count initialization with 0
int Counter :: count=0;

int main()
{
	Counter OB1;
	Counter::set();
	Counter::Print();

	Counter OB2;
	Counter::set();
	Counter::Print();

	Counter OB3;
	Counter::set();
	Counter::Print();

	return 0;
}
