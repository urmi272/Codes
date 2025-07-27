#include<iostream>
using namespace std;
class Complex{
    int real, complex;
    public:
    Complex(int r = 0, int c=0){
        real = r;
        complex = c;
    }
    friend istream & operator >> (istream &in, Complex &c){ // (cin return type, obj return type)
        cout<<"Enter real part: ";
        in >> c.real;
        cout <<"Enter Imaginary no.: ";
        in >> c.complex;

        return in;
    }
    friend ostream & operator << (ostream &out, Complex &c){
        out << c.real<<" + "<< c.complex<<"i";
        
        return out;
    }
};
int main(){
    Complex C;
    cin >> C; //passing cin and object as argument
    cout<< "Complex num is: ";
    cout<< C; //passing cout and object as argument
    return 0;
}