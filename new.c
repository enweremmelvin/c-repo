#include <stdio.h>
#include <string.h>
#include <math.h>
#include "headers/userReg.h"
#include "headers/o-userReg.h"
#include "headers/runningSum.h"
#include "headers/fizzbuzz.h"
#include "headers/arrays.h"
//#include "headers/recursion.h"


// function declarations

int recursion(int x);


int main(void) {

  printf("%d\n", recursion(10));

  struct footballClubs {
    char name[100];
    char stadium[100];
    char slogan[100];
    int age;
  };

  // create instance of our structure
  struct footballClubs club = {"Manchester United", "Old Trafford", "Red Devils", 100};

  // change club info
  for (int x = 1; x <= 4; x++) {
    if (x == 1) {
      strcpy(club.name, "Chelsea Football Club");
    } else if (x == 2) {
      strcpy(club.stadium, "Stamford Bridge");
    } else if (x == 3) {
      strcpy(club.slogan, "The Blues");
    } else {
      club.age = 81;
    }
  }

  int * point = &club.age;
  printf ("%d\n", *point);
    

  
  printf("%s\n%s\n%s\n%d\n", club.name, club.stadium, club.slogan, club.age);
  
}


// function definitions

int recursion(int x) {
  if (x > 0) {
    return x + recursion(x - 1);
  } else {
    return 0;
  }
}
