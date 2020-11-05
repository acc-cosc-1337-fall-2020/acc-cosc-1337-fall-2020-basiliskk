//atm.cpp
#include "atm.h"
#include <iostream>
using std::cout;

ATM::ATM()
{

  accounts.push_back(BankAccount(get_balance_from_db()));
  accounts.push_back(BankAccount(get_balance_from_db()));
  accounts.push_back(BankAccount(get_balance_from_db()));
  accounts.push_back(BankAccount(get_balance_from_db()));
  accounts.push_back(BankAccount(get_balance_from_db()));

}

void ATM::display_balance()const 
{
  cout<<"Balance: "<<accounts[current_account_index].get_balance()<<"\n";
}

void ATM::scan_card()
{
  current_account_index = rand() % 4;

}
int ATM::get_balance_from_db() 
{
  return rand() % 10000 + 1;
}
