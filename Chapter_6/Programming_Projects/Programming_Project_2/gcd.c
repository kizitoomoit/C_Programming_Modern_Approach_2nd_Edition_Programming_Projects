/* Write a program that asks the user to enter two integers, then calculates and
 * displays their greatest common divisor (GCD):
 *
 * Enter two integers: 12 28
 * Greatest common divisor: 4
 *
 * Hint: The classig algorithm for compunting the GCD, know as Euclid's
 * algorithm, goes as follows: Let m and n be variables containing the two
 * numbers. if  n is 0, then stop: m contains the GCD. Otherwise, compute the
 * remainder when m is divided by n. Copy n into m and copy the remainder into
 * n. The repeat the process. starting with testing wether n is 0.
 *
 */

/* Solution */
#include <stdio.h>

int main(void) {
  /* Declare and initialize variables to be used */
  int m, n, remainder;
  /* printf("Enter two integers: ");
   scanf("%d %d", &m, &n);
 */

  /* Why are we using while (n !=0) you might ask?: because if ther user enters
   * negative numbers the program should run but if we using while (n > 0) the
   * programm will not handle the negative integers well */
  while (n != 0) {
    remainder = m % n;
    m = n;
    n = remainder;
  }

  printf("Gratest common divisor: %d", m);

  return 0;
}
