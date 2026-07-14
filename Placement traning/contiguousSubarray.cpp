#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout << "Enter size: ";
    cin >> n;
    vector<int> a(n);
    cout << "Enter Array: ";
    for(int i = 0; i < n; i++) cin >> a[i];

    int maxLen = 1, maxStart = 0;
    int currLen = 1, currStart = 0;

    // for(int i = 1; i < n; i++){
    //     if(a[i] == a[i-1]){
    //         currLen++;
    //     } else {
    //         currLen = 1;
    //         currStart = i;
    //     }

    //     if(currLen > maxLen){
    //         maxLen = currLen;
    //         maxStart = currStart;
    //     }
    // }

    // cout << "Longest subarray: ";
    // for(int i = maxStart; i < maxStart + maxLen; i++) cout << a[i] << " ";
    // cout << "\nLength: " << maxLen;
    // return 0;
}