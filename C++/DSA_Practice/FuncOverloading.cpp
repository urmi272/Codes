#include <iostream>
using namespace std;
class Num{
    double n;
    int p;
    public:
    void mul(double n1, int n2){
        cout<<"Multiplication of "<<n1<<" & "<<n2<<": ";
        cout<<" "<<n1*n2<<endl;
    }
    void mul(int n1, int n2){
        cout<<"Multiplication of "<<n1<<" & "<<n2<<": ";
        cout<<" "<<n1*n2<<endl;
    }
    void mul(){
        cout<<"\nEnter two no.: ";
        cin>>n>>p;
        cout<<"Multiplication of "<<n<<" & "<<p<<": "<<n*p;
    }
};
int main(){
    Num n1, n2, n3;
    n1.mul(4.0, 2);
    n2.mul(2,8);
    n3.mul();
    return 0;
}