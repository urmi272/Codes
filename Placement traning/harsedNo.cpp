#include<iostream>
using namespace std;

int main(){
    int n;
    cin>> n;
    int sum = 0;
    int original_n = n; // Store the original value of n for later use  
    while(n > 0){
        sum += n % 10;
        n = n / 10;
    }
    if(sum != 0 && original_n % sum == 0){
        cout<< sum;
    } else{
        cout<< -1;
    }
    return 0;
}