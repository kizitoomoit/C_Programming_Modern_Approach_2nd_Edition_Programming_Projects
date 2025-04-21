/* Question:  Write a programm that finds the largest in a series of number by
 * the user. The program must prompt the user to enter the numbers one by one.
 * When the user enters 0 or a negative number, the program must display the
 * laragest nonnegative number entered: */

/* Enter a number: 60
 Enter a number: 38.3
 Enter a number: 4.89
 Enter a number: 100.62
 Enter a number: 75.2295
 Enter a number: 0

  The largest number entered was 100.62 */

/* Solution  1 using while loop*/

#include <stdio.h>

int main(void) {
  /* Declare and initialize variables to be used */
  float number, largest_number = 0;
  do {

    printf("Enter a number ( Enter 0 to quit ): ");
    scanf("%f", &number);

    /* Check if the number the user has entered is less than or equal to 0 */
    if (number <= 0) {
      /* if true break out of the loop */
      break;
    }

    /* if false check if the current number is larger than the largest number */
    if (number > largest_number) {
      /* if true then the largest number is the current number */
      largest_number = number;
    }
    /* Loop again to check if the number the user has entered is greater than 0,
     * if true continue with the loop */
  } while (number > 0);

  /* If the user enters 0 quit the loop and print the current largest number */
  printf("The largest number entered was: %f\n", largest_number);

  return 0;
}
