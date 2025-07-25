#include <iostream>
using namespace std;
class Animals
{
public:
virtual void sound() // virtual function (late binding)
{
    cout << "This is parent class" << endl;
}
};
class Dogs : public Animals // derived class
{
public:
void sound()
{
cout << "Dogs bark" << endl;
}
};
int main()
{
Animals *a; //creating pointer obj
Dogs d;
a= &d;
a -> sound(); // late binding
return 0;
}
