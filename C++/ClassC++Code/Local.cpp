#include <iostream>
using namespace std;
void test();
int main()
{
int var = 5;
test();
cout <<"Main Local variable:"<< var<<&var<<endl;
 }
 void test()
 {

int var;
var = 6;
cout <<"test local variable:"<< var<<&var<<endl;
}

