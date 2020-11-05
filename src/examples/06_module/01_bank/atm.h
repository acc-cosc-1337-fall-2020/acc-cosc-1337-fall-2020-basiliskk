#include "bank_account.h"
#include <iostream>
#include <vector>
#include <stdlib.h>

#ifndef ATM_H
#define ATM_H


class ATM {

  public:
    ATM();
    void display_balance() const;
    void scan_card();
  private:
    int get_balance_from_db();
    std::vector<BankAccount> accounts;
    int current_account_index;

};

#endif 

