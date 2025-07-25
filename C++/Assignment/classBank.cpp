#include<iostream>
using namespace std;
class Bank{
    double balance;
    public:
    void deposite(double amt){
      balance += amt; 
      cout<<"Your balance is: "<<balance<<endl;
    }
    void withdraw(double amt){
    if (amt <= balance) {
     balance -= amt;
      cout << "Withdrawal successful. Current balance: "<< balance <<endl;
     }
    else {
      cout << "Insufficient balance! Hence, Cannot withdraw." <<endl;
     }
  }
};
int main(){
  string ownername = "urmi";
  int accNo = 123;
  double balance=10000.0, x, deposit_amt, withdrawal_amt;
  Bank obj, obj2;
  cout<<"Owner's name: "<<ownername<<endl<<"Account No. = "<<accNo<<endl<< "Balance: "<<balance<<endl;
  deposit_amt = 1000.0;
  cout<<"depositing: "<<deposit_amt<<endl;
  obj.deposite(deposit_amt);
  withdrawal_amt = 200.0;
  cout<<"withdrawing: "<<withdrawal_amt<<endl;
  obj.withdraw(withdrawal_amt);
  withdrawal_amt = 200000.0;
  cout<<"withdrawing: "<<withdrawal_amt<<endl;
  obj.withdraw(withdrawal_amt);
  return 0;
}