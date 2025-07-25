//predefined exception handling
#include<iostream>
#include<exception>
using namespace std;
int main(){
    int a,b,c;
    try{
        if (b==0)
            throw runtime_error("cannot div by zero");
    c=a/b;
    cout<<c<<endl;
    }
    catch(runtime_error &error){
        cout<<"exception error: "<<error.what(); //to call the exception file we use what() method
    }
    return 0;
}