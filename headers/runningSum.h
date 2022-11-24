#include <stdio.h>


int runningSum() {

  // this is a program that will sum numbers till the user enters a negative one

  int input;
  int sum = 0;

  while(1) {

    // take user input
    printf("Enter a number: ");
    scanf("%d", &input);

    if (input >= 0) {
      sum = sum + input;
    } else {
      printf("Your final sum is: %d\n", sum);
      break;
    }
  }

}
