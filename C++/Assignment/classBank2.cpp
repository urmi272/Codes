#include<iostream>
using namespace std;
class BankAccount {
  string accountNumber;
  double balance;
  public:
    BankAccount(const std::string & accNum, double initialBalance): accountNumber(accNum),
  balance(initialBalance) {}

  void deposit(double amount) {
    balance += amount;
    cout<<"Deposit successful! Your Current balance: "<<balance<<endl;
  }
  void withdraw(double amount) {
    if (amount <= balance) {
      balance -= amount;
      cout<<"Withdrawal successful. Current balance: "<<balance<<endl;
    } else {
      cout<<"Cannot withdraw your balance is Insufficient."<<endl;
    }
  }
};
int main() {
  string accno = "XYZ";
  double balance, deposit_amt, withdrawal_amt;
  balance = 10000;
  cout<<"Account No. = "<<accno<<endl<< "Balance: "<<balance<<endl;

  BankAccount account(accno, 10000.0);

  deposit_amt = 1000;
  cout << "Deposit Amount: " << deposit_amt <<endl;
  account.deposit(deposit_amt);

  withdrawal_amt = 2000;
  cout << "Withdrawl Amount: " << withdrawal_amt << endl;
  account.withdraw(withdrawal_amt);

  withdrawal_amt = 18000;
  cout << "Withdrawl Amount: " << withdrawal_amt << endl;
  account.withdraw(withdrawal_amt);
  return 0;
}