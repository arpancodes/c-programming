#include <stdio.h>

int main() {

  int ages1[10];
  // first element - index 0
  // 0-9

  int size = 10;
  int ages2[] = {1, 4, 60, 458, 5484, 52401, 54, 8478, 978, 40};

  for (int i = 0; i < size; i++) {
    printf("%d ", ages2[i]);
  }
  ages2[3] = 440;
  printf("\n");
  for (int i = 0; i < size; i++) {
    printf("%d ", ages2[i]);
  }
  printf("\n");

  /////////////   Multidimensional Arrays   /////////////

  int rows = 3;
  int columns = 4;
  int studentGrades[3][4] = {
      {1, 3, 4, 6}, {3, 2, 4, 5}, {32, 2, 4, 9}}; // atleast columns is required
                                                  // in declaration

  for (int i = 0; i < rows; i++) {
    printf("{ ");
    for (int k = 0; k < columns; k++) {
      printf("%d ", studentGrades[i][k]);
    }
    printf(" }\n");
  }

  // Arrays don't have to contain ints, just easiest to start with
  // All data does need to be same type, though

  return 0;
}