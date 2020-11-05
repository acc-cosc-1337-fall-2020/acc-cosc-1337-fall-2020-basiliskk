#include "atm.h"
#include <iostream>
#include <vector>
#include <stdlib.h>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
int main()
{
  srand(time(NULL));

    ATM atm;
    atm.scan_card();
    atm.display_balance();
  /*
  cout<<"Balance: "<<checking_account.get_balance()<<endl;
  cout<<"Bank balance: "<<checking_account.get_bank_balance()<<endl;

  BankAccount new_account;
  cout<<"Balance: "<<new_account.get_balance()<<endl;

  display_bank_account_data(new_account);
  cout<<endl<<"Balance: "<<new_account.get_balance()<<endl;
  cout<<"Bank Balance: "<<new_account.get_bank_balance()<<endl;

  BankAccount account = get_account();
  cout<<"account balance: "<<account.get_balance()<<endl;
  cout<<"Bank balance: "<<account.get_bank_balance()<<endl;
  */

  
  
  

	return 0;
}