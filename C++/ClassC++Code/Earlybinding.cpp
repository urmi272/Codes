#include <iostream>
using namespace std;
class Animals
{
public:
void sound()
{
cout << "This is parent class" << endl;
 }
};
class Dogs : public Animals //derived class
{
public:
void sound()// Function Overriding
{
cout << "Dogs bark" << endl;
}
};
int main()
{
Animals a;
Dogs d;
a= d;
a.sound();
return 0;
}
