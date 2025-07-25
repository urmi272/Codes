#include<iostream>
using namespace std;
class Complex{
    float real;
    float imaginary;
    public:
    void set(float r , float i){
        real = r;
        imaginary = i;
    }
    void disp(){
        cout<<"complex num: "<<real<<" + "<<imaginary<<"i"<<endl;
    }
    Complex sum(Complex c){
        c.real = real + c.real;
        c.imaginary = imaginary + c.imaginary;
        return c;
    }
};
int main(){
    Complex C1, C2, C3;
    C1.set(10, 20);
    C1.disp();
    C2.set(5, 10);
    C2.disp();
    cout<<"Sum:\n";
    C3 = C1.sum(C2);
    C3.disp();
    return 0;
}