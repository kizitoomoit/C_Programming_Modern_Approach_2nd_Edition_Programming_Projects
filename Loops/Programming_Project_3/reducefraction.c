/* Write a program that asks the user to enter a fraction, then reduces the
 * fraction to lowest terms:
 *
 * Enter a fraction: 6/12
 * In lowest terms: 1/2
 *
 * Hint: To reduce a fraction to lowest terms, first compute the GCD of the
 * numerator and denominator. Then divide both the numerator and denominator by
 * the GDC. */

/* Solution */

#include <stdio.h>

int main(void) {
  int numerator, denominator, remainder, reduce_numerator, reduce_denominator;

  printf("Enter a fraction: ");
  scanf("%d/%d", &numerator, &denominator);

  /* Hold the original values for later division */
  reduce_numerator = numerator;
  reduce_denominator = denominator;

  /* find the GCD of both the numerator and denominator */
  while (numerator != 0) {
    remainder = numerator % denominator;
    denominator = numerator;
    numerator = remainder;
  }

  /* After finding the GCD divide both the numerator and denominator by the GCD
   */

  printf("In lowest terms: %d/%d", reduce_numerator / denominator,
         reduce_denominator / denominator);
  return 0;
}
