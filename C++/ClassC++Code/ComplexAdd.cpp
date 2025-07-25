#include<iostream>
using namespace std;
class Complex
{
public:
    float real;
    float imag;
    Complex()
    {
        real=0;
        imag=0;
    }
    void input()
    {
        cout<<"Enter real and imag part of a number:"<<endl;
        cin>>real;
        cin>>imag;
    }

    Complex operator +(const Complex &obj)
    {
        Complex temp;
        temp.real=real+obj.real;
        temp.imag=imag+obj.imag;
        return (temp);


    }

    void display()
    {
        cout<<"Output of complex number is:"<<real<<"+"<<imag<<"i"<<endl;
    }
};
int main()
{
    Complex comp1, comp2, result;
    comp1.input();
    comp2.input();
    result=comp1+comp2; //+ overloaded function
    result.display();
    return 0;

}
