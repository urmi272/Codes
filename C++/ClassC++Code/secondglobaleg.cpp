
#include <iostream>
using namespace std;
int a = 10;
// Global variable
int main()
{
int b = 20;
// Local variable
void show();
cout << "Inside the main!!!" << endl;
cout << "a = " << a << endl;
show();
return 0;
}
void show()
{
int a = 30;
// Local variable with same name as global
cout << "Inside the show!!" << endl;
cout << "a = " << a << endl;
// refer to local variable
cout << "a = " << ::a << endl;
// refer to global variable
}
