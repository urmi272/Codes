#include<iostream>
using namespace std;
class Marks {
  int roll;
  string name;
  float marks;
  static int count;
  public:
  Marks() {
    roll = 0;
    name = "";
    marks = 0;
  }
  Marks(const string& name, float marks) {
    count++;
    roll = count;
    this->name = name;
    this->marks = marks;
  }
  void display() {
    cout << "Roll No.: " << roll << endl;
    cout << "Name: " << name << endl;
    cout << "Marks: " << marks << endl;
  }
};
int Marks::count = 0;
class Physics : public Marks {
  public:
  Physics(const string& name, float marks) : Marks(name, marks) {
  }
  void displayPhysics() {
    cout << "Physics marks of " << ":" << endl;
    display();
  }
};
class Chemistry : public Marks {
  public:
  Chemistry(const string& name, float marks) : Marks(name, marks) {
  }
  void displayChemistry() {
    cout << "Chemistry marks of "<< ":" << endl;
    display();
  }
};
class Mathematics : public Marks {
  public:
  Mathematics(const string& name, float marks) : Marks(name, marks) {
  }
  void displayMathematics() {
    cout << "Mathematics marks of " << ":" << endl;
    display();
  }
};
class English : public Marks {
  public:
  English(const string& name, float marks) : Marks(name, marks) {
  }
  void displayEnglish() {
    cout << "English marks of " << ":" << endl;
    display();
  }
};
class Computer : public Marks {
  public:
  Computer(const string& name, float marks) : Marks(name, marks) {
  }
  void displayComputer() {
    cout << "Computer marks of " << ":" << endl;
    display();
  }
};
int main() {
  Physics p1("Akshita", 95);
  Chemistry c1("Anjali", 85);
  Mathematics m1("Riya", 90);
  English e1("Dev", 80);
  Computer co1("Sonali", 88);

  p1.displayPhysics();
  c1.displayChemistry();
  m1.displayMathematics();
  e1.displayEnglish();
  co1.displayComputer();
  return 0;
}