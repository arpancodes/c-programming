#include <stdio.h>
#include <string.h>

int main() {
  printf("What is your name? (type) ");
  char name[20]; // '\0'
  scanf("%19s", name);

  int letter = 0;
  while (name[letter] != '\0') {
    printf("%c", name[letter]);
    letter++;
  }
  // ends on 6th character.

  // DON'T OVERWRITE THE NULL CHARACTER!!!
  // Used to find end of string like above.

  printf("\n");
  printf("Size of name is %d\n", letter);

  /////////////   String functions   /////////////

  // strlen
  printf("Size of name is %lu\n", strlen(name));

  // strcmp - returns 0 if equal values
  if (strcmp(name, "Arpan") == 0) // make sure you remember == 0
  {
    printf("Your name is Arpan!\n");
  }

  // strcpy
  char copy[20];
  strcpy(copy, name); // destination must be first
  printf("Copy of name: %s\n", copy);

  // strcat (concatenation)
  char lastName[] = " Abhishek";
  strcat(copy, lastName);
  printf("Full name: %s\n", copy);

  // https://www.programiz.com/c-programming/string-handling-functions

  return 0;
}