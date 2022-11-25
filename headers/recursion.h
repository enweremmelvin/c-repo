#include <stdio.h>

int recursion (int add) {
  if (add > 0) {
    return add + recursion(add - 1);
  } else {
    return 0;
  }
}
