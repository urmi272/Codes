#include<iostream>
using namespace std;
template <class T, class X>
T Big( T a, X b)
{
    if(a>b)
        return a;
    else
        return b;
}

int main()
{
    //cout<<Big(100.5,20)<<endl;
    cout<<Big(10.0,11.0)<<endl;
    return 0;
}
