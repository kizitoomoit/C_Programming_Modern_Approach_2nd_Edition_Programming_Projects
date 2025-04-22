/* 5. Programming Project 1 in Chapter 4 asked you to write a program that
 * displays a two-digit number with its digits reverse. Generalize the program
 * so that the number can have one, two, three, or more digits. Hint: Use a do
 * loop that repeteadly divides the number 10, stopping when it reaches 0. */

/* Soluttion */

#include <stdio.h>

int main(void) {
  /* Declare and initialize the variables to be used */
  int number, reversed_number = 0;

  /* Prompt the user to enter numbers to be reversed */
  printf("Enter number to reverse: ");
  scanf("%d", &number);

  do {
    /* Shift the number on place to the to the left by mulitplying it by 10 and
     * then so as to create room for a new digit pop the last digit from the
     * number and add it to the reversed digit */

    /* i.e 12345,
     * number % 10 gives us 5
     * reversed_number * 10 + 5 ( 0 * 10 + 5 = 5)
     * reversed_number = 5
     *
     * number  = number / 10 removes the last digit
     * Now reversed_number = 5,
     * number = 1234 */
    reversed_number = reversed_number * 10 + (number % 10);

    /* remove the last digit from the current number */
    number /= 10;
  } while (number > 0);

  printf("Reversed number is: %d\n", reversed_number);
  return 0;
}
