#include<iostream>
using namespace std;
void Salary(){
    int s;
    double HRA, DA;
    cout<<"Enter your Basic Salary: "<<endl;
    cin>>s;
    if(s<=10000){
        HRA = s*0.2;
        DA = s*0.8;
        cout<<"Your Gross Salary is: "<<s+HRA+DA<<endl;
    }
    else if(s>=20001){
        HRA = s*0.3;
        DA = s*0.95;
        cout<<"Your Gross Salary is: "<<s+HRA+DA<<endl;
    }
    else{
        HRA =s*0.25;
        DA = s*0.9;
        cout<<"Your Gross Salary is: "<<s+HRA+DA<<endl;
    }
};
int main(){
    Salary();
    Salary();
    Salary();
    Salary();
    return 0;
}
