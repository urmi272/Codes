#include<iostream>
using namespace std;
class Function
{
public:
    int a, b, c;
    void Addition(); // Function declaration or prototype
};
void Function::Addition()//Function Definition
{
   cout<<"Enter two numbers:"<<endl ;
   cin>>a>>b;
   c=a+b;
   cout<<"Sum is:"<<c<<endl;
}
int main()
{
    Function obj;
    obj.Addition();
    return 0;
}
