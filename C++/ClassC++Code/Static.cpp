#include <iostream>
using namespace std;
class Student {
   private:
   static int rollNo;
   string name;
   int marks;
   public:

   Student(string n, int m)
   {
       name=n;
       marks=m;
      rollNo++;
   }

   void show() {
      cout<<"Roll Number = "<< rollNo <<endl;
      cout<<"Name = "<< name <<endl;
      cout<<"Marks = "<< marks <<endl;
      cout<<endl;
   }
   static void ShowNextRollno()
   {
       cout<<"RollNumber of next student will be: "<<rollNo;
   }
};
int Student::rollNo = 100;
int main() {
   Student s1("ABC", 89);
   s1.show();
   Student s2("JKL", 92);
   s2.show();
   Student s3("MNO", 85);
   s3.show();
  Student::ShowNextRollno();
   return 0;
}
