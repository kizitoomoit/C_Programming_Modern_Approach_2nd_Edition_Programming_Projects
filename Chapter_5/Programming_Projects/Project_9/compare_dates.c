/* Write a program that prompts the user to enter two dates and then indicates
 * which date comes earlier on the calendar:
 *
 * Enter first date (mm/dd/yy): 3/6/08
 * Enter second date (mm/dd/yy): 5/17/07
 * 5/17/07 is earlier than 3/6/08
 *
 */
/* Solution */

#include <stdio.h>

int main(void) {
  int first_month, first_day, first_year, second_month, second_day, second_year;

  printf("Enter first date (mm/dd/yy): ");
  scanf("%d/%d/%d", &first_month, &first_day, &first_year);

  printf("Enter second date (mm/dd/yy): ");
  scanf("%d/%d/%d", &second_month, &second_day, &second_year);

  /* First solution */
  if (first_year > second_year) {
    printf("%d/%d/%02d is earlier than %d/%d/%02d\n", second_month, second_day,
           second_year, first_month, first_day, first_year);
  } else
    printf("%d/%d/%02d is earlier than %d/%d/%02d\n", first_month, first_day,
           first_year, second_month, second_day, second_year);

  if (first_year == second_year) {

    if (first_month > second_month) {
      printf("%d/%d/%02d is earlier than %d/%d/%02d\n", second_month,
             second_day, second_year, first_month, first_day, first_year);
    } else {
      printf("%d/%d/%02d is earlier than %d/%d/%02d\n", first_month, first_day,
             first_year, second_month, second_day, second_year);
    }

    if (first_month == second_month) {
      if (first_day > second_day) {
        printf("%d/%d/%02d is earlier than %d/%d/%02d\n", second_month,
               second_day, second_year, first_month, first_day, first_year);

      } else {
        printf("%d/%d/%02d is earlier than %d/%d/%02d\n", first_month,
               first_day, first_year, second_month, second_day, second_year);
      }
    }
  }

  /* Second Solution */

  if (first_year < second_year ||
      (first_year == second_year && first_month < second_month) ||
      first_year == second_year && first_month == second_month &&
          first_day < second_day) {
    printf("%d/%d/%02d is earlier than %d/%d/%02d\n", first_month, first_day,
           first_year, second_month, second_day, second_year);
  } else if (first_year == second_year && first_month == second_month &&
             first_day == second_day) {
    printf("%d/%d/%02d is equal to %d/%d/%02d\n", first_month, first_day,
           first_year, second_month, second_day, second_year);
  } else {
    printf("%d/%d/%02d is earler than %d/%d/%02d\n", second_month, second_day,
           second_year, first_month, first_day, first_year);
  }
  return 0;
}
