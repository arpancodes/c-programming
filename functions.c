#include <stdio.h>

int power(int input, int exponent) {
  int total = 1;
  for (int i = 0; i < exponent; i++) {
    total *= input;
  }
  return total;
}

int recursivePower(int input, int exponent) {
  if (exponent < 1) {
    return 1;
  }
  return input * recursivePower(input, exponent - 1);
}

void changeValue(int *input) { *input = 9000; }

int oldestValue(int ages[], int size) {
  int largest = ages[0];
  for (int i = 1; i < size; i++) {
    if (ages[i] > largest) {
      largest = ages[i];
    }
  }
  return largest;
}

int main() {

  int x = 5;

  int xto5 = power(x, 5);
  printf("%d\n", xto5);

  int recursive = recursivePower(x, 3);
  printf("%d\n", recursive);
  changeValue(&x);
  printf("%d\n", x);

  ///////////////// Arrays //////////////////////
  int size = 7;
  int ages[] = {1, 2, 45, 78, 674, 87, 2};

  printf("%d\n", oldestValue(ages, size));

  return 0;
}