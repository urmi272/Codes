#include<iostream>
using namespace std;
void check(){
    char x;
    cout<<"Enter any key to know it's type: ";
    cin>>x;
    if (x=='a'|| x=='e'|| x=='i'|| x=='o'|| x=='u'){
        cout<<"it's a vowel"<<endl;
    }
    else if(x=='!'||x=='~'||x=='@'||x=='#'||x=='$'||x=='%'||x=='^'||x=='&'||x=='*'||x=='+'||x=='='||x=='-'||x=='*'){
        cout<<"it's a Special symbol"<<endl;
    } 
    else if(x=='1'||x=='2'||x=='3'||x=='4'||x=='5'||x=='6'||x=='7'||x=='8'||x=='9'||x=='0'){
        cout<<"it's a number"<<endl;
    }
    else{
        cout<<"it's a consonant"<<endl;
    }
};
int main(){
    check();
    check();
    check();
    check();
    check();
    check();
    return 0;
}