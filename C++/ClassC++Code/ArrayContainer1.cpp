#include<iostream>
# include<array>
using namespace std;
int main()
{
    array <int, 5> array1={11,22,33,44,55};
    array <int, 5> array2={1,2,3,4,5};
    array1.swap(array2);
    cout<<"Array one is:\n";
    for(int i=0;i<5;i++)
        cout<<array1[i]<<"  ";
    cout<<"\nArray two is:\n";
    for(int i=0;i<5;i++)
        cout<<array2[i]<<"  ";
}
