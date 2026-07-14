#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    vector<int> a(n), b(n);
    cout<<"enter a ele:";
    for(int i = 0; i< n; i++){
        cin>> a[i];
    }
    cout<<"enter b ele:";
    for(int i = 0; i< n; i++){
        cin>> b[i];
    }

    int k;
    cout<<"Enter required sum:";
    cin>> k;

    for(int i = 0; i< n; i++){
        if((a[i]+b[i])<= k) cout<< "Yes"<< endl;
        else cout<< "No"<< endl;
    }
    return 0;
}