#include<iostream>
using namespace std;
class Calculator
{
    public:
        void sum(int a)
        {
            cout<<"Sum is:"<<a+a<<endl;
        }
        void sum(float a) // Function overloading
        {
            cout<<"Sum is:"<<a+a<<endl;
        }
};
int main()
{
    Calculator c1;
    c1.sum(10);
    c1.sum(10.5f); //to define float we use "f"
    return 0;
}
