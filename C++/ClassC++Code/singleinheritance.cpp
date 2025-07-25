#include <iostream>
using namespace std;
 class Account // Base Class
 {
   public:
   float salary = 60000;
 };
   class Programmer : protected Account // Derived class
   {
   public:
   float bonus = 5000;

   };
   class Total:public Programmer
   {
   public:
    int DA=10000;
     void print()
   {

       cout<<"Salary: "<<salary<<endl;
     cout<<"Bonus: "<<bonus<<endl;
     cout<<"DA: "<<DA<<endl;
   }
   };
int main(void) {
     Total p1;
     p1.print();
    return 0;
}
