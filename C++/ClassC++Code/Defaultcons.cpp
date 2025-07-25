#include <iostream>
using namespace std;
class Defaultcons {
   private:
   int num1, num2 ;
   public:
   Defaultcons() //default constructor body
   {
      num1 = 10;
      num2 = 20;
   }
   void display() {
      cout<<"num1 = "<< num1 <<endl;
      cout<<"num2 = "<< num2 <<endl;
   }
};
int main() {
   Defaultcons obj; //calling of default constructor
   obj.display();
   return 0;
}
