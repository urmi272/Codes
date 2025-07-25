#include <iostream>
using namespace std;
int main()
{
int a = 100;
int *ptr = &a;
int **ptr1 = &ptr;
cout << &a<<endl;
cout << &ptr<<endl;
cout << &ptr1<<endl;
cout << a<<endl;
cout << ptr<<endl;
cout << ptr1<<endl;
cout << *ptr<<endl;
cout << *ptr1<<endl;
cout << **ptr1<<endl;
//cout << ***ptr1<<endl; // show error
return 0;
}

/*0x61fe1c
0x61fe10
0x61fe08
100
0x61fe1c
0x61fe10
100
0x61fe1c
100*/