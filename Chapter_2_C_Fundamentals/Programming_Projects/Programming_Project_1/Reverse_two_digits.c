/* Write a program that asks the user to enter a two-digit number, then prints
 * the number with its digits reversed. A session with the program should have
 * the following appearance:
 *
 * Enter a two-git number: 28
 * The reversal is: 82
 *
 * Read the number using %d, then break it into two digits. Hint: if n is an
 * integer, then n % 10 is the last digit in n / 10 is n with the last digit
 * removed. */

#include <stdio.h>

int main(void) {
  // Initilize variables to be used
  int number, first_number, last_number;

  // Prompt the user to enter two digits
  printf("Enter a two-digit number: ");
  // Capture the user's input
  scanf("%d", &number);

  // Get the first number from the two digits
  first_number = number / 10;
  // Get the second number from the two digits
  last_number = number % 10;

  // Print starting with the last number
  printf("The reversal is: %d%d\n", last_number, first_number);

  return 0;
}
