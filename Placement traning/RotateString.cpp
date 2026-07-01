#include<iostream>
using namespace std;

int main(){
    string s, goal;
    cin>> s>> goal;

    if(s.length()!=goal.length()){
        cout<< "false";
        return 0;
    }
    s = s + s;
    if(s.find(goal)!=string::npos){
        cout<< "true";
    } else {
        cout<< "false";
    }
    return 0;
}