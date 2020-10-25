#include <iostream>
#include "loops.h"
using std::cout;
using std::cin;
using std::endl;
int main() 
{
  int i = 1;
  do {
    
    int x = 0;
    
    while (true) {
      cout << "Please enter a number that is between 1 and 20: ";
      cin >>x;
      if (x >= 1 && x <=20) {
        break;
      }

    }
    cout <<"Your factorial is: "<<factorial(x)<<endl;
    
    

    
    cout <<"If you would like to continue please enter any number other than 0: ";
    cin >> i;
  }while (i != 0);

	return 0;
}