 #include <iostream>
 using namespace std;
 class A
 {
 int sum, sub;
   public:
     A(int x) {
        cout << "value is: "<<x<< endl;
        cout << "Constructor called" << endl;
    }
     ~A() {
         cout << "Memory is released" << endl;
         cout << "Destructor called" << endl;
    }
 };
 int main()
 {
  A *b ; //pointer object- constructor
  b = new A(10); //dynamically memory allocation
  delete b; // without releasing the memory, destructor can't be called!
  return 0;
 }