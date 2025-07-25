#include<iostream>
using namespace std;
class Employee
{
public:
    string eName;
    int eId;
    int eSalry;
Employee()
{
    cout<<"enter ename:"<<endl;
    cin>>eName;
    cout<<"Enter eID:"<<endl;
    cin>>eId;
    cout<<"Enet esalary:"<<endl;
    cin>>eSalry;
}
void show()
{
    cout<<"employee name is:"<<eName<<endl;
    cout<<"employee Id is:"<<eId<<endl;
    cout<<"employee salary is:"<<eSalry<<endl;
}
};
int main()
{
    Employee E[3]; // array of object
    for(int i=0;i<3;i++)
    {
        E[i];
    }
    for(int i=0;i<3;i++)
    {
    E[i].show();
    }
    return 0;
}
