#include <iostream>
using namespace std;
int main()
{
  try {
  throw 10;
  }
  catch (int x) {
  cout << "Caught " << x;
  }
  catch (...) {
  cout << "Default Exception\n";
  }
  return 0;
}

