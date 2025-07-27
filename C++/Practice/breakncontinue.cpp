#include<iostream>
using namespace std;
int main()
{
    for(int i=0;i<=10; i++){
        if (i==4){
            continue;//it will skip that condition n continue further
        }
        cout<<i<<" "; 
    }
    cout<<endl;
    for(int i=0;i<=10; i++){
        if (i==6){
            break;//code will break n wont continue further 
        }
        cout<<i<<" ";
    }
    return 0;
}