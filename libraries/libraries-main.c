#include "libraries.h"
#include <stdio.h>

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