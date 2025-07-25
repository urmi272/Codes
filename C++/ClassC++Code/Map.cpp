#include <iostream>
#include <map>
using namespace std;
int main()
{
    map <int , string > customer;
    customer[100]="Gagendra";
    customer[123]="Dilip";
    customer[145]="Aditya";
    customer[171]="Shahid";
    customer[200]="Rajesh";
    cout<<customer.at(123)<<endl;
    cout<<customer.size()<<endl;
    cout<<customer.empty()<<endl;
    customer.clear();
    cout<<customer.empty()<<endl;
    customer.insert(pair<int,string>(205,"Sourabh"));

    map <int, string>:: iterator p = customer.begin();
    while(p!=customer.end())
    {
        cout<<p->second<<endl;
        p++;
    }
}
