/* 1. Write a program that calculates how many digits a number contains:
 * Enter a number: 374
 * The number 374 has 3 digits
 *
 * You may assume that the number has no more than four digits. Hint: Use if
 * statements to test the number. For example, if the number is between 0 and 9,
 * it has one digit. If the number is between 10 and 99, it has two digits */

#include <stdio.h>

int main(void) {
  int number;

  printf("Enter a number: ");
  scanf("%d", &number);

  if (number >= 0 && number <= 9) {
    printf(" The number %d has 1 digits", number);
  } else if (number >= 10 && number <= 99) {
    printf("The number %d has 2 digits", number);
  } else if (number >= 100 && number <= 999) {
    printf("The number %d has 3 digits", number);
  } else if (number >= 1000 && number <= 9999) {
    printf("The number %d has 4 digits", number);
  }

  return 0;
}
