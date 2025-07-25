#include<iostream>
#include<stdexcept>
using namespace std;
void test()
throw (int, char, runtime_error){
    //throw 10;
    //throw 'g';
    throw runtime_error("xyz"); //only one throw will be catched
};
int main (){
    try{
        test();
    }
    catch(int i){
        cout<<"integer type "<<i<<endl;
    }
    catch(char c){
        cout<<"charactor type "<<c<<endl;
    }
    catch(runtime_error r){
        cout<<"run time error type "<<r.what()<<endl;
    }
}