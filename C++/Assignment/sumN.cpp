#include<iostream>
using namespace std;
int main(){
    int n, sum=0;
    cout<<"Enter a positive nunber: ";
    cin>>n;
    for(int i=0; i<=n; i++){
        sum += i;
    }
cout<<"the sum of the first '"<<n<<"' natural number is: "<<sum;
return 0;
}