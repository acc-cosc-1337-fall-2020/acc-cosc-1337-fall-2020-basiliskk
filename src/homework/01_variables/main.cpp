//write include statements
#include <iostream> 
#include "variables.h"


using std::cout;
using std::cin;

int main()
{
	double meal_amount;
  double tip_rate;
  double tip_amount;
  double tax_amount;
  double total;
  cout<<"Enter the cost of your meal:";
  

  cin >> meal_amount;
  tax_amount = get_sales_tax_amount(meal_amount);
  cout<<"Enter the tip rate in decimal form (example: 0.15 for 15%):";
  cin >> tip_rate;
  tip_rate = tip_rate;
  tip_amount = get_tip_amount(meal_amount, tip_rate);
  total = tax_amount + tip_amount + meal_amount;
  cout<<"Meal Amount:  " <<meal_amount<<"\n";
  cout<<"Sales Tax:    " <<tax_amount<<"\n";
  cout<<"Tip Amount:   " <<tip_amount<<"\n";
  cout<<"Total:        " <<total;



	return 0;
}
