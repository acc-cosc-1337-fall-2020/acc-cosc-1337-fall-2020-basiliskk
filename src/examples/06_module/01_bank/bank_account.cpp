//bank_account.cpp
#include "bank_account.h"
#include <iostream>
using std::cout; using std::endl;
BankAccount::BankAccount(int b) : balance(b)
{
  bank_balance += balance;

}

void BankAccount::deposit(int amount) 
{
  if (amount > 0) 
  {
    balance += amount;
    bank_balance += amount;
  }
}

void BankAccount::withdraw(int amount) 
{
  if (amount > 0 && balance >= amount) 
  {
    balance -= amount;
    bank_balance-= amount;
  }

}
void BranchBank::update_balance(int b) {
  branch_balance += b;
  BankAccount::bank_balance = b;
}

int BankAccount::bank_balance = 0;

void display_bank_account_data(BankAccount& account) {
  account.deposit(1000);
  cout<<"Function: "<<account.get_balance()
<<endl;  
}

BankAccount get_account() {
  BankAccount a(1000);

  return a;
}

void display_balance(BankAccount account) {
  std::cout<<account.balance;
}





