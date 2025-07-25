
#include <iostream>
using namespace std;
void test();
int main()
{ // local variable to main()
int var = 5;

cout<<var<<endl;
// illegal: var1 not declared inside main()
test();
var = 9;
cout<<var<<endl;
 }
 void test()
 {
// local variable to test()
int var1;
var1= 6;
// illegal: var not declared inside test()
cout << var1<<endl;
}
