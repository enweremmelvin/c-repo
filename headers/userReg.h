#include <stdio.h>

int userReg(void) {

  /* This is a small program that will collect user data and return it */

  /* declare variables to be used */
  char fname[1000];
  char lname[1000];
  char city[1000];
  char gender[1000];
  int age;

  /* take user input */
  printf("Enter your First name: ");
  scanf("%s", fname);

  printf("Enter your Last name: ");
  scanf("%s", lname);

  printf("Enter your City: ");
  scanf("%s", city);

  printf("Enter your Gender: ");
  scanf("%s", gender);

  printf("Enter your age: ");
  scanf("%d", &age);

  /* return user input */
  printf("\nHello there %s, or would you prefer I call you %s?\n", fname, lname);
  printf("How has %s been treating a %d year old %s?\n\n", city, age, gender);

}
