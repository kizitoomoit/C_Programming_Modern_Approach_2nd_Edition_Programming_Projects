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
  float number, largest_number = 0;

  printf("Enter a number ( Enter 0 to quit ): ");
  scanf("%f", &number);

  /* Check the entered number if it is not 0 */
  while (number != 0) {
    /* Enter the loop if the number is not 0 */

    /* Check if the current entered number is larger than than the currently
     * largest number */
    if (number > largest_number) {
      /* if the current entered number is larger than the largest the assign it
       * to the largest */
      largest_number = number;
    }

    /* Prompt the user again to enter a number so that we can test, it is hard
     * to avoid this in a while loop */
    printf("Enter a number ( Enter 0 to quit ): ");
    scanf("%f", &number);
  }

  /* If the user enters 0 quit the loop and print the current largest number */
  printf("The largest number entered was: %f\n", largest_number);

  return 0;
}
