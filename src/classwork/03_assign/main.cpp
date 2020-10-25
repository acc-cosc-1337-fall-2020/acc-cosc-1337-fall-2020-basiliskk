#include "decision.h"
#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::cin;
using std::string;
int main() 
{
  int grade;
  cout <<"Please enter a grade between 0 and 100: ";
  cin >> grade; 
  if(grade <=100 && grade >=0) {
    cout <<"(if) Your grade is: "<< get_letter_grade_using_if(grade)<<endl;
    cout <<"(switch) Your grade is: "<<get_letter_grade_using_switch(grade) <<endl;
  }
  else {
    cout<<"You did not enter a number that was in range.";
  }

  

	return 0;
}

