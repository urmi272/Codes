#include <iostream>
using namespace std;
 class Animal {
   public:
 Animal() {
    cout<<"Eating..."<<endl;
 }
  ~Animal()
  {
      cout<<"Destructor of animal"<<endl;
  }
   };
   class Dog: public Animal
   {
       public:
     Dog(){
    cout<<"Barking..."<<endl;
     }
     ~Dog()
  {
      cout<<"Destructor of dog"<<endl;
  }
   };
   class BabyDog: public Dog
   {
       public:
     BabyDog() {
    cout<<"Weeping..."<<endl;
     }
     ~BabyDog()
  {
      cout<<"Destructor of Babydog"<<endl;
  }
   };
int main(void) {
    BabyDog d1;
     return 0;
}
