#include <stdio.h>
#include "headers/userReg.h"
#include "headers/o-userReg.h"
#include "headers/runningSum.h"

int main(void) {

  // shorthand if else - ternary operator
  int x;
  printf("Enter a number to be measured against 10: ");
  scanf("%d", &x);
  
  (x <= 10) ? printf("Yes, x is less than or equal to 10.\n") : printf("No, x is greater than 10,\n");

}
