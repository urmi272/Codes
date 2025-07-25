#include <iostream>
using namespace std;
class cal{
    int a, b;
    int c;
    public:
    void div(int a, int b){
    try{
        if (b==0){
            throw "\nCannot divide by zero";
        }
    c=a/b;
    cout<<"Division is: "<<c<<endl;
    }
    catch(const char *d){
        cout<<"Exception occured:"<<d;
    }
    }
};
int main(){
    cal c;
    c.div(10, 5);
    c.div(10, 0);
    return 0;
}