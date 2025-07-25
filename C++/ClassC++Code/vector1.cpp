#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> v1{11,22,33,44,55};

cout<<"Capacity: "<<v1.capacity()<<endl; //capacity 5

    v1.push_back(10);

cout<<"After pushing element \nCapacity: "<<v1.capacity()<<endl;//capacity will get double = 10

    cout<<"vector at index 4: "<<v1.at(4);

    cout<<"\nvector is:"<<endl;

    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<"  ";
    }

    v1.pop_back();
    cout<<"\nAfetr pop: \n";

    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<"  ";
    }

    cout<<"\nFisrt element is:"<<v1.front();

    cout<<"\nlast element is:"<<v1.back();



}
