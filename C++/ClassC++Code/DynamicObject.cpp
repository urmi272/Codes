#include <iostream>

using namespace std;

class A
{
	 public:
       	A()
       	{
    	  cout << "Constructor" << endl;
      	}
       	~A() {
    	   cout << "Destructor" << endl;
        }
};

int main()
{
	A *a = new A; //declaring a dynamic object
	delete a; // Delete object
	return 0;
}
