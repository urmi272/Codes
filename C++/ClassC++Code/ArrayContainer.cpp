#include<iostream>
# include<array>
using namespace std;
int main()
{
    array <int, 10> arr={11,22,33,44,55};
    cout<<arr.at(2)<<endl;
    cout<<arr[1]<<endl;
    cout<<arr.front()<<endl;
    cout<<arr.back()<<endl;
    cout<<"Array is: ";
    for(int i=0;i<=4;i++)
    {
        cout<<arr[i]<<" "<<endl;
    }
    cout<<"After Filling Array is: ";
    arr.fill(80);
    for(int i=0;i<=4;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"Total elements are:"<<arr.size();

}
