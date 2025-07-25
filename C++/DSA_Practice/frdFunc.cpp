#include<iostream>
using namespace std;
class num{
    int a,d,n;
    public:
friend void showSum(num n1);//declaring freiend and passing obj as arrgument
};

void showSum(num n1){
        cout<<"enter a starting no.: ";
        cin>>n1.a;//accessing private members though obj 
        cout<<"enter the common difference: ";
        cin>>n1.d;
        cout<<"enter the no. of items for AP series: ";
        cin>>n1.n;
        double s;
        cout<<"AP series is: "<< n1.a<< endl;
         s = n1.a;
        for(int i=0; i<n1.n; i++){
         s+=n1.d;
         cout<<s<<endl;
        }
        cout<<"the sum is AP series is: "<<s+n1.a<<endl;
    }
int main(){
    num no;
    showSum(no);
    return 0;
}