/* Here is a simplified version of the Beaufort scale, which is used to estimate
 * wind force:
 *
 * Speed (knot)      Description
 * Less than 1       Calm
 * 1 - 3             Light Air
 * 4 - 27            Breeze
 * 28 - 47           Gale
 * 48 - 63           Storm
 * Above 63          Hurricane
 *
 * Write a program that asks the user to enter a wind speed ( in knots ), then
 * displays the corresponding descrption.
 */

#include <stdio.h>

int main(void) {
  int knots;

  printf("Enter wind speed (in knots): ");
  scanf("%d", &knots);

  if (knots < 1) {
    printf("Calm\n");
  } else if (knots <= 3) {
    printf("Light air\n");
  } else if (knots <= 27) {
    printf("Breeze\n");
  } else if (knots <= 47) {
    printf("Gale\n");
  } else if (knots <= 63) {
    printf("Storm\n");
  } else {
    printf("Hurricane\n");
  }

  return 0;
}
