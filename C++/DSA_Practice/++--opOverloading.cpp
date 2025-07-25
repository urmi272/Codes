#include<iostream>
using namespace std;
class math{
    int num;
    public:
    math(){
        cout<<"Initial value: ";
        num = 10;
    }
    void operator ++(){
        cout<<"after increment: ";
        num += 5;
    }
    void operator --(){
        cout<<"after decrement: ";
        num -= 7;
    }
    void display(){
        cout<<num<<endl;
    }
};
int main(){
    math x;
    x.display();
    ++x; //calling ++ and passing x(obj) as an argumrnt
    x.display();
    --x;
    x.display();
    return 0;
}