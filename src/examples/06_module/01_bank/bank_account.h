#ifndef BRANCH_BANK_H
#define BRANCH_BANK_H

class BranchBank 
{
public:
  BranchBank(int b): branch_balance(b){}
  void update_balance(int b);
  int get_branch_balance()const {return branch_balance;}
private:
  int branch_balance;
};


#endif

#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H

class BankAccount 
{
  public: 
      BankAccount() : BankAccount(0) {}
      BankAccount(int b);
      void deposit(int amount);
      void withdraw(int amount);
      int get_balance() const{return balance;}
    
      static int get_bank_balance() {return bank_balance;}
      friend void display_balance(BankAccount account);
      friend void BranchBank::update_balance;
       //const makes class  static int get_bank_balance() {return bank_balance;}
  private: 
      int balance;
      
      static int bank_balance;
}; 

#endif

void display_bank_account_data(BankAccount& b);
BankAccount get_account();

