#include<iostream>
using namespace std;

int main(){
    int marks[5] = {1,2,3,4,5}; //array
    // int marks[] = {1,2,3,4,5}; is same as above
    for (int i = 0; i < 5; i++)
    {
        cout<<marks[i]<<" ";
    }
    marks[3]=8;//changing
    marks[6]=9;//adding in 7th row 
    cout<<"\nmarks after changing"<<endl;
    for (int i = 0; i < 7; i++)
    {
        cout<<marks[i]<<" ";
    }
    return 0;
}