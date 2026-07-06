#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    string st;
    getline(cin, st);

    // split into words
    stringstream ss(st);
    vector<string> arr;
    string w;
    while (ss >> w) arr.push_back(w);

    // reverse every alternate word (0-based: 0,2,4...)
    for (size_t i = 0; i < arr.size(); i += 2) {
        reverse(arr[i].begin(), arr[i].end());
    }

    // output reconstructed string with spaces
    for (size_t i = 0; i < arr.size(); ++i) {
        if (i) cout << ' ';
        cout << arr[i];
    }
    cout << '\n';
}