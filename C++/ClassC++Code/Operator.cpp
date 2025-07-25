
#include <iostream>
using namespace std;

class Count {
   public:
    int value;

   public:

    // Constructor to initialize count to 5
    Count() //
    {
    value=5;
    }

    // Overload ++ when used as pre increment
    void operator ++ ()
    {
        ++value;
    }


    // Overload ++ when used as post increment
  void operator ++ (int) {
        value++;
    }

    void display()
    {
        cout << "Count: " <<value++<< endl;
    }
};

int main() {
    Count obj1;
    obj1.display();
    obj1++; //Call the "void operator ++ (int)" function
    obj1.display();
    ++obj1; // Call the "void operator ++ ()" function
    obj1.display();
    return 0;
}
