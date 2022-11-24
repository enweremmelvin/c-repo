#include <stdio.h>
#include "headers/userReg.h"
#include "headers/o-userReg.h"
#include "headers/runningSum.h"
#include "headers/fizzbuzz.h"
#include "headers/arrays.h"

int main(void) {

  int age = 19;
  int* ptr = &age;

  printf("%p\n", ptr);
  printf("%d\n", *ptr);

  char name[] = "Melvin";
  char* ptr_str = name;

  printf("\n%s\n", name);
  printf("%c\n", *ptr_str);
  
}
