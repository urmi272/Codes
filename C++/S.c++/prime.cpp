#include<iostream>
using namespace std;
class Prime
{
    int x1,x2;
public:
    void getdata()
    {
        cout<<"enter values for x1 and x2"<<endl;
        cin>>x1>>x2;
    }
    void Checkprime();
};
void Prime :: Checkprime()
{
    int i;
    for(x1;x1<=x2;x1++)
    {
        for(i=2;i<x1;i++)
        {
            if(x1%i==0)
            {
               break;
            }
        }
        if(i==x1)
            cout<<x1<<endl;
    }
}
int main()
{
    Prime p;
    p.getdata();
    p.Checkprime();
}
