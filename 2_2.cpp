
 

    es (54 sloc)  1.24 KB
RawBlame
  
#include<iostream>
#include <string>
using namespace std;

class Account
{
 public:
  Account( int);
  void credit(int );
  void debit(int );
  int getAccountBalance();
 private:
  int accountBalance;
};
Account::Account( int balance)
{
 if(balance>=0)
  accountBalance=balance;
 else
 {
  accountBalance=0;
  cout<<"Initial balance was invalid."<<endl;
 }
}
void Account::credit( int balance)
{
 accountBalance = accountBalance + balance;
}
void Account::debit( int balance)
{
 if(accountBalance>=balance)
 {
  accountBalance = accountBalance - balance;
 }
 else
 {
  cout<<"Debit amount exceeded account balance."<<endl;
 }
}
int Account::getAccountBalance()
{
 return accountBalance;
}
int main()
{
 Account Account1(100);
 Account Account2(-2);
 cout << "Account1's initial balance is: "<< Account1.getAccountBalance()<< "\nAccount2's initial balance is: "<< Account2.getAccountBalance() << endl;
 Account1.credit(250);
 Account2.credit(350);
 cout << "\nAccount1's balance is: "<< Account1.getAccountBalance()<< "\nAccount2's balance is: "<< Account2.getAccountBalance() << endl;
 Account1.debit(50);
 Account2.debit(25);
 cout << "\nAccount1's balance is: "<< Account1.getAccountBalance()<< "\nAccount2's balance is: "<< Account2.getAccountBalance() << endl;
}