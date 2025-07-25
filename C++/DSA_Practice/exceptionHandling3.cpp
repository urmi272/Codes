#include<iostream>
#include<exception>
using namespace std;
//inheriting exception class
class class1 : public exception{
    int a;
    public:
    const char* what(){
        return "overiding what() method";
    }
};
class class2{
    int a;
    public:
    void fun(){
        class1 c1;
        cout<<c1.what();
    }
};
int main(){
    class2 c2;
    c2.fun();
    return 0;
}
