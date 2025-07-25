#include<iostream>
using namespace std;
class Prime
{
    int n;
public:
    void getdata()
    {
        cout<<"enter values for x1 and x2"<<endl;
        cin>>n;
    }
    void Checkprime();
};
void Prime :: Checkprime()
{
    int i;
    for(i=2;i<n;i++)
    {
            if(n%i==0)
            {
               cout<<"number is not prime";
               break;
            }
    }
        if(i==n)
            cout<<"number is prime";

}
int main()
{
    Prime p;
    p.getdata();
    p.Checkprime();
}
