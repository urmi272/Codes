//Function with argument and with return type
#include<iostream> //header file
using namespace std;
class Fun //creating class
{
    int a,b,c; //need to create object to access instance variables
public: // access specifier
    int Sum(int a1,int b1)//setting parameters or formal argument or func. variables
    {
        a=a1;
        b=b1;
        c=a+b;
        return c;
    }
};
int main()
{
    int a1=10,b1=15,result; //actual argument
    Fun obj;
    result=obj.Sum(a1,b1); //calling function
    cout<<"Sum is:"<<result;
    return 0;
}

