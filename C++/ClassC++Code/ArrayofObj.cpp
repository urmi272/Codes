#include<iostream>
using namespace std;
class student
{
public:
    int rollNo,m1,m2,m3;
    student()
    {
        cout<<"Enter the rollnum:"<<endl;
        cin>>rollNo;
        cout<<"Enter three subject marks:";
        cin>>m1>>m2>>m3;
    }
    void show()
    {
        cout<<"RollNO is:"<<rollNo<<endl;
        cout<<"Total Marks is:"<<m1+m2+m3<<endl;
    }
};
int main()
{
    int n=3;
    student obj[n]; //array of objects
    for(int i=0;i<n;i++)//initiase;condition;incement/decrement
    {
      obj[i].show();
    }
    return 0;
}
