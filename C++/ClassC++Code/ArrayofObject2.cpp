#include<iostream>
using namespace std;
class employee
{
public:
    int eId;
    string ename;
    employee()
    {
        cout<<"Enter the employee id:";
        cin>>eId;
        cout<<"Enter the employee name;";
        cin>>ename;
    }
    void show()
    {
        cout<<"employee id is:"<<eId<<endl;
        cout<<"employee name is:"<<ename<<endl;
    }
};
int main()
{
    int n;
    cout<<"enter the size of object:";
    cin>>n;
    employee e[n];
    for(int i=0;i<n;i++)
    {
        e[i];
    }
    for(int i=0;i<n;i++)
    {
        e[i].show();
    }
    return 0;
}
