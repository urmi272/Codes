#include<iostream>
using namespace std;
class criteria{
    public:
    void marraige(int age, char gender){
        if(gender=='female'||gender=='f'||gender=='Female')
        {
          if(age>=18){
            cout<<"your eligible for marraige"<<endl;
           }
          else
          {
            cout<<"your not allowed to marry yet!"<<endl;
          }
        };
        if(gender=='male'||gender=='m'||gender=='Male')
        {
            if(age>=21){
            cout<<"your eligible for marraige"<<endl;
            }
            else{
            cout<<"your not allowed to marry yet!"<<endl;
            }
        }
    }
};
int main(){
criteria a;
int age;
cout<<"Enter your age:"<<endl;
cin>>age;
char gender;
cout<<"Enter your gender:"<<endl;
cin>>gender;
a.marraige(age,gender);
}