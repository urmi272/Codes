#include<iostream>
using namespace std;
int main()
{
    static int a;
    cout<<a<<endl;
    if(a==3)
    {
        exit(0);
    }
    a++;
    main();
}
