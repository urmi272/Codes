#include <iostream>
using namespace std;
class Box
{
    private:
        int length;

    public:
        Box()
        {
          length=11;
        }
friend int printLength(Box obj); //friend function declaration or prototype
};
int printLength(Box obj) //friend function definition(they need to be called through obj)
{
   obj.length =obj.length+10;
    return obj.length;
}
int main()
{
    Box b;
    int result;
    result=printLength(b);
    cout<<"Length of box: "<< result <<endl;
    return 0;
}

