#include "decision.h"

#include <iostream>
using std::string;
string get_letter_grade_using_if (int grade) {
  if(grade >= 90) {
    return "A";
  }
  else if (grade < 90 && grade >= 80) {
    return "B";
  }
  else if (grade < 80 && grade >= 70) {
    return "C";
  }
  else if (grade < 70 && grade >= 60) {
    return "D";
  }
  else if (grade < 60 && grade >= 0) {
    return "F";
  }
  else {
    return "You did not enter a valid grade, the number is out of range";
  }

}
string get_letter_grade_using_switch (int grade) {
  
  switch (grade/10)
  {
    case 9: 
      return "A";
      break;
    case 8: 
      return "B";
      break;
    case 7: 
      return "C";
      break;
    case 6: 
      return "D";
      break;
    case 5:
      return "F";
      break;
    case 4:
      return "F";
      break;
    case 3:
      return "F";
      break;
    case 2:
      return "F";
      break;
    case 1:
      return "F";
      break;
    case 0:
      return "F";
      break;
    default:
      return "You did not enter a valid grade, the number is out of range";
  }
}


