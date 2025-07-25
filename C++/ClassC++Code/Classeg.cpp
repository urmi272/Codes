#include<iostream>
using namespace std;
class Bank
{
    string Customer_name;
    int Acno;
    string Type_of_acc;
    float balance;
    public:
        Bank(string name, int a, string acc_type, float b)
        {
            Customer_name=name;
            Acno=a;
            Type_of_acc=acc_type;
            balance=b;
        }
        void deposit(float amt)
        {
            balance=balance+amt;
        }
        float checkBal()
        {
            return balance;
        }
        void withdraw(float amt)
        {
            float Bal=checkBal();
            if(amt<=Bal)
            {
                balance=balance-amt;
            }
            else
            {
                cout<<"Insufficient Balance"<<endl;
            }
        }
             void display()
        {
            cout<<"Name of Customer"<<Customer_name<<endl;
            cout<<"Balance is:"<<balance<<endl;
        }
};
int main()
{
    Bank c1("Vidit", 10001, "Saving",100000L);
    c1.display();
    c1.deposit(9000);
    cout<<"The Balance is:"<<c1.checkBal()<<endl;
    c1.withdraw(1000000);
    cout<<"The Balance is:"<<c1.checkBal()<<endl;
return 0;
}
