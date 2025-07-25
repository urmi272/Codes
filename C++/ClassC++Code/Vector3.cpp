#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> v1;

    cout<<v1.capacity()<<endl; //0

    for(int i=0;i<=9;i++)
    {
     v1.push_back(i);
    }

for(int i=0;i<v1.size();i++)
{
       cout<<v1[i]<<endl;
}


    cout<<v1.capacity()<<endl;
     cout<<"Total number of elements are:"<<v1.size()<<endl;

    v1.pop_back();
    v1.pop_back();
    v1.pop_back();

    cout<<"After pop\n";

    cout<<v1.capacity()<<endl;

    cout<<"Total number of elements are:"<<v1.size()<<endl;

    for(int i=0;i<v1.size();i++)
        cout<<v1[i]<<endl;
    v1.clear();
    cout<<"Total capacity is:"<<v1.capacity()<<endl;
    cout<<"Total number of elements are:"<<v1.size()<<endl;
}

