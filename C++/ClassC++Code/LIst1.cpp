#include<iostream>
#include<list>
using namespace std;
int main()
{
    list <int> Lst1{22,85,65,22,94,77};

    list <int>::iterator p=Lst1.begin();
    while(p!=Lst1.end())
    {
        cout<<*p <<" ";
        p++;
    }
   Lst1.sort();
   cout<<"\nAfter Sorting:"<<endl;
    list <int>::iterator q=Lst1.begin();
    while(q!=Lst1.end())
    {
        cout<<*q <<" ";
        q++;
    }
      Lst1.reverse();
   cout<<"\nAfter Reverse:"<<endl;
    list <int>::iterator m=Lst1.begin();
    while(m!=Lst1.end())
    {
        cout<<*m <<" ";
        m++;
    }
        Lst1.remove(22);
   cout<<"\nAfter Remove:"<<endl;
    list <int>::iterator o=Lst1.begin();
    while(o!=Lst1.end())
    {
        cout<<*o <<" ";
        o++;
    }


}
