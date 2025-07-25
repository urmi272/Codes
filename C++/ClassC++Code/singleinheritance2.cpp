#include <iostream>
using namespace std;
 class Animal
 {
   public:
 void eat()
 {
    cout<<"Eating..."<<endl;
 }
   };
   class Dog: protected Animal
   {
       public:
     void bark()
     {
         Animal::eat();
    cout<<"Barking...";
     }
   };
int main(void) {
    Dog d1;
    d1.bark();
    return 0;
}
