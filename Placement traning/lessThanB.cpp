#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout<< "Enter size:";
    cin>> n;
    vector<int> a(n);
    cout<< "Enetr A's value: ";
    for(int i = 0; i< n; i++){
        cin>> a[i];
    }
    
    int b;
    cout<<"Enter b value:";
    cin>>b;

    // for(int i = 0; i<n; i++){
    //     if(a[i]<= b){
    //         cout<< a[i]<< " ";
    //     }
    // }
    // return 0;

    // Binary search: find first index > b
    int l = 0, r = n;
    while(l < r){
        int mid = l + (r - l) / 2;
        if(a[mid] <= b){
            l = mid + 1; // go right
        } else {
            r = mid; // go left
        }
    }
    // l is now the count of elements <= b

    cout << "Elements <= " << b << ": ";
    for(int i = 0; i < l; i++){
        cout << a[i] << " ";
    }
    return 0;
}