#include<iostream>
using namespace std;

int main(){
    string str;
    cin>> str;

    int count = 0;
    for(int i = str.length() - 1; i >= 0; i--){
        if(str[i] == ' '){
            continue;
        }
        else if(str[i] != ' '){
            count++;
        }
        else{
            break;
        }
    }
    cout<< count;
    return 0;
}