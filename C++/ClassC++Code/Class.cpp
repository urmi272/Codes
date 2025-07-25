#include<iostream>
using namespace std;
class Test {
   public:
    int x;
};
// Driver Code
int main()
{
    Test t;
    t.x = 20;
    cout<<t.x;
//compiler error because x is private
    return 0;
}
