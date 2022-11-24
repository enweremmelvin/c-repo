#include <stdio.h>

int multiDimensionalArray(void) {

    int array[5][3] = { {2, 4, 6}, {8, 10, 12}, {14, 16, 18}, {20, 22, 24}, {26, 28, 30} };

  int r, c;

  for (r = 0; r < 5; r++) {
    for (c = 0; c < 3; c++) {
      printf("%d\n", array[r][c]);
    }
  }

}
