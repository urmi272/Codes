#include<iostream>
using namespace std;
template <class X, class Y>
X Big(X a, Y b) // generic function
{
    if(a>b)
        return a;
    else
        return b;
}
int main()
{
    //cout<<Big(100.5,20)<<endl;
    cout<<Big(10.5,20.9)<<endl;
    return 0;
}
