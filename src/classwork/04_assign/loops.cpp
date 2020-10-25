#include "loops.h"
int factorial (int num) {
  int sum = 1;
  for (int i = 1; i <= num; i++) {
    sum = sum * i;
  }
  return sum;
}