#include<iostream>
using namespace std;
class Counter
{
	private:
	    //static data member as count
		static int count;
	public:
	    int c;
	    //default constructor
		Counter()
		{
		    count++;
		    c++;
        }
         void Print()
		{
		    cout<<"\nTotal objects are count: "<<count;
		    cout<<"\nTotal objects are c: "<<c;
		    }
};
//count initialization with 0
int Counter :: count = 0;
int main()
{
	Counter OB1;
	OB1.Print();
	Counter OB2;
		OB1.Print();
	Counter OB3;


	OB1.Print();
	return 0; }
