#include <stdio.h>
#include <string.h>
#include <math.h>
#include "headers/userReg.h"
#include "headers/o-userReg.h"
#include "headers/runningSum.h"
#include "headers/fizzbuzz.h"
#include "headers/arrays.h"
#include "headers/recursion.h"

// declare functions

int runSum(void);


// start of main function

int main(void) {

  runSum();
  
}

// end of main function


// definition of functions

int runSum(void) {

  // declare function variables
  int input, placeholder;
  placeholder = 0;

  while (1) {
    // take user input
    printf("Enter a number to be added to the sum: ");
    scanf("%d", &input);

    // declare variable for checking data type
    char check[1] = "a";

    if (input != check) {
    
      if (input > 0 || input == 0) {
	
	placeholder += input;
	
      } else if (input == 0 && placeholder == 0) {
	
	printf("No point starting up your sum with 0 now is there\n");
	break;
	
      } else if (input < 0) {

	printf("You entered a negative number. Your final sum is: %d\n", placeholder);
	break;
	
      } 
      
    } else {
      
      printf("Invalid input\n");
      break;
      
    }
    
  }

}
