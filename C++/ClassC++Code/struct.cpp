#include <iostream>
using namespace std;
struct Test {
    // x is public
    int x;
};
int main()
{
    Test t;
    t.x = 20;
  //works fine because x is public
    cout << t.x;
    return 0;
}
