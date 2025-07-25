#include <iostream>
using namespace std;
class A
{
    int a = 4;
    int b = 5;
    public:
    int mul()
    {
        int c = a*b;
        return c;
    }
};

class B : private A
{
    public:
    void display()
    {
        int result = mul();
        cout <<"Multiplication of a and b is : "<<result<<endl;
    }
};
int main()
{
   B obj;
   obj.display();

    return 0;
}
