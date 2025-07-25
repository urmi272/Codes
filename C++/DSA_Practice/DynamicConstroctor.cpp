#include<iostream>
using namespace std;
class num{
    int *b; //pointer var is 
    public:
    num(int v){
        b = new int;
        *b = v;
    }
    int disp(){
        return (*b);
    }
};
int main(){
    num ob(5);
    cout<<ob.disp();
   // delete ob;
    return 0;
}