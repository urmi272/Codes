#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	cout<<"Enter two integer values: ";
	cin>>a>>b;
	try
	{
		if(b == 0)
		{
			throw b;
		}
		else
		{
			cout<<"Div is:"<<(a/b)<<endl;
		}
	}
	catch(int x)
	{
		cout<<"Second value cannot be zero that is:"<<x<<endl;
	}
	c=a+b;
	cout<<"Sum is:"<<c;
	return 0;
}
