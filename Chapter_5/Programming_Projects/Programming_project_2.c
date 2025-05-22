/* 2. Write a program that asks the user for a 24-hour time, then displays the
 * tiem in 12-hour form
 *
 * Enter a 24-hour time: 21:11
 * Equivalent 12-hour time: 9:11 PM
 *
 * Be careful not to display 12:00 as 0:00 */

#include <stdio.h>

// Macro definition
#define TWELVE_HOURS 12

int main(void) {
  int twenty_four_hour, mins = 00, twelve_hour_clock;

  printf("Enter a 24-hour time: ");
  scanf("%d:%d", &twenty_four_hour, &mins);

  printf("Equivalent 12-hour time: ");

  if (twenty_four_hour == 0) {
    printf(" 12:%.2d AM\n", mins);
  } else if (twenty_four_hour < 12) {
    printf("%d:%.2d AM\n", twenty_four_hour, mins);
  } else if (twenty_four_hour == 12) {
    printf("%d:%.2d PM\n", twenty_four_hour, mins);
  } else {

    printf("%d:%.2d PM\n", twenty_four_hour - TWELVE_HOURS, mins);
  }
  return 0;
}
