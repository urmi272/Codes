#include<iostream>
#include<list>
using namespace std;
int main()
{
    list <int> Lst1{10,20,30};
    Lst1.push_back(100);
    Lst1.push_front(5);


    list <int>::iterator p=Lst1.begin();

    while(p!=Lst1.end())
    {
        cout<<*p<<endl;
        p++;

    }
    cout<<"\n After pop:"<<endl;
    Lst1.pop_back();
    Lst1.pop_front();
    list <int>::iterator q=Lst1.begin();
      while(q!=Lst1.end())
    {
        cout<<*q <<endl;
        q++;
    }

}
