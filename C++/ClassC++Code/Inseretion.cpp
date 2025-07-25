#include <iostream>
using namespace std;

class Distance {
   private:
      int feet;
      int inches;

   public:
      // required constructors
      Distance() {
         feet = 0;
         inches = 0;
      }
      Distance(int f, int i) {
         feet = f;
         inches = i;
      }
      friend ostream& operator<<( ostream &output, const Distance &D ) {
         output << "Feet : " << D.feet << " Inch : " << D.inches;
         return output;
      }

      friend istream& operator>>( istream  &input, Distance &D ) {
         input >> D.feet >> D.inches;
         return input;
      }
};

int main() {
   Distance D1(56, 10), D2(5, 11);
   cout << "First Distance : " << D1 << endl; //passing cout and D1 as argument
   cout << "Second Distance :" << D2 << endl;
//for user input:
   Distance D3;
   cout<<"Enter Third Distance: "<<endl;
   cin>>D3;
   cout << "Third Distance :" << D3 << endl;

   return 0;
}
