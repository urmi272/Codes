#include<iostream>
using namespace std;
int num;
int check(){
    cout<<"Enter a number: "<<endl;
    cin>>num;
    if (num%2==0){
        cout<<"given number is Even"<<endl;
    }
    else {
        cout<<"Given number is Odd"<<endl;
    }
    return 0;
};
int main(){
    check();
    check();
    check();
    return 0;
}