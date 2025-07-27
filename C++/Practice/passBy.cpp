#include <iostream>
#include <vector>
using namespace std;

// //pass by value
// void inc(int x){
//     ++x;
//     cout<<x<<endl;
// };

// //pass by reference
// void add(int &y){
//     ++y;
//     cout<<y<<endl;
// };

// int main(){
//     int a = 10;
//     int b = 10;
//     inc(a);
//     cout<<"passed by value therefore a remains untempered: "<<a<<endl;
//     add(b);
//     cout<<"passed by reference which changes the original value: "<<b<<endl;
// }

vector<int> passby(int a, int &b){
    a++;
    b++;
    return {a, b};
}
int main (){
    int x = 10;
    int y = 10;
    vector<int> v = passby(x, y);
    cout<<v[0]<<" "<<v[1]<<endl;
    cout<<x<<" "<<y<<endl;
    return 0;
}