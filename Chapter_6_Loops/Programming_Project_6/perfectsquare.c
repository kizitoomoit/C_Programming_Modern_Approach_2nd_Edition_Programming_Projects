/* 6. Write a program that prompts the user to enter a number n, then prints all
 * even squares between 1 and n. For example, if the user enters 100, the
 * program should print the following:
 * 4
 * 16
 * 36
 * 64
 * 100 */

/* Solution */

#include <stdio.h>

int main(void) {
  int i, n = 100;

  printf("Enter the maximum square limit: ");
  scanf("%d", &n);

  /* Solution 1 using for loop */

  /* Start from 2 and increases i by 2 each time so we that we only check even
  numbers.
   * Stops when the square of i ( i * i) becomes greater than n */
  for (i = 2; i * i <= n; i = i + 2) {
    printf("%d Squared: %d\n", i, i * i);
  }

  /* Solution 2 using while loop */
  i = 2;
  while (i * i <= n) {
    printf("%d squared is %d\n", i, i * i);
    i = i + 2;
  }

  return 0;
}
