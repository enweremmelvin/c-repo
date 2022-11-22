#include <stdio.h>

/* This program aims to optimise the user registration system */

int optimisedUserReg(void) {

  /* define structure that will hold values */
  typedef struct {
    char fname[1000];
    char lname[1000];
    char country[1000];
    char state[1000];
    char gender[1000];
    int age;
  } USER;

  USER newUser;
  
  /* take user input */
  printf("Please enter your First Name: ");
  scanf("%s", newUser.fname);

  printf("Please enter your Last Name: ");
  scanf("%s", newUser.lname);

  printf("Please enter your Country: ");
  scanf("%s", newUser.country);

  printf("Please enter your State: ");
  scanf("%s", newUser.state);

  printf("Please enter your Gender: ");
  scanf("%s", newUser.gender);

  printf("Please enter your Age: ");
  scanf("%d", &newUser.age);

  /* output entered values to our user */
  printf("\n\nHello %s %s, it's nice to know that people from the state of %s in %s are intellectuals. I mean, for a %d year old  %s like you to be so good at programming is mind blowing.\n\n", newUser.fname, newUser.lname, newUser.state, newUser.country, newUser.age, newUser.gender);

}
