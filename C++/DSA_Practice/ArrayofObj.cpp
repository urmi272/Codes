#include<iostream>
using namespace std;
class set{
    int a, b;
    public:
    void setdata(){
        cout<<"Enter 2 no: "<<endl;
        cin>>a>>b;
    }
    void showdata(){
        cout<<" ("<<a<<","<<b<<") ";
    }
};
int main(){
    set obj[5];
    for (int i=0; i<5; i++) obj[i].setdata(); //calling func. thro obj
    
    for (int i=0; i<5; i++)
        obj[i].showdata();
        
    return 0;
}