#include <iostream>
using namespace std;
class Parent {
public:
    virtual void Print(){ //don't add virtual you wanna access parent class
        cout << "Base Function" << endl;
    }
};
class Child : public Parent { //inheriting parent class
public:
    void Print() //overriding funtion
    {
        cout << "Derived Function" << endl;
    }
};
int main(){
    Parent *obj;
    Child C1;
    obj = &C1;
    obj->Print();
   
    // cout<<"\nThrough normal method"<<endl;
    // Child C; 
    // C.Print(); //you cant access parent fuction by a creating obj of child class
    
    return 0;
}