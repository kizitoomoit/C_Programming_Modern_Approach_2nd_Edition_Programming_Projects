/* Write a program that prints a one-month calendar. The user specifies the
 * number of days in the month and the day of the week on which the month
 * begins:
 *
 * Enter number of days in month: 31
 * Enter startdig day of the week (1=Sun, 7=Sat): 3
 *
 *     1  2  3  4  5
 *  6  7  8  9 10 11 12
 * 13 14 15 16 17 18 19
 * 20 21 22 23 24 25 26
 * 27 28 29 30 31
 *
 * Hint: This program isn't as hard as it looks. The most import part is a for
 * statement that uses a variable i to count from 1 to n, where n is the number
 * of days in the month, printing each value of i. Inside the loop, an if
 * statement tests whether i is the last day in a week; if so, it prints a
 * new-line character.
 */

/* Solution */

#include <stdio.h>

int main(void) {

  /* Declare variables to be used */
  int day, days_in_month, starting_day;

  /* Prompt the user to enter the days in the month */
  printf("Enter number of days in month: ");

  /* Capture users input */
  scanf("%d", &days_in_month);

  /* Prompt the user to enter starting day of the week for the particular month
   */
  printf("Enter Starting day of the week (1=Sun, 7=Sat): ");
  /* Capture users input */
  scanf("%d", &starting_day);

  /* We want leading dates to be blank if the day does not start from 1 which is
   * Sunday */
  for (day = 1; day <= starting_day; day++) {
    printf("  ");
  }

  /* Solution 1 using for loop */

  /* print the days of the month */
  for (day = 1; day <= days_in_month; day++) {
    printf("%3d", day);

    /* Check weather the current day is and the end of the week if true move to
     * a new line */
    /* we take the current day + the startding day - i to shift the day one day
     * behind to get the correct day, if the number divided by 7 we get 0 it
     * means we are at the end of the week */
    /* i.e the starting day is Sunday which is 1, and the current day is Sunday
     * which is also 1, to get the correct position we add the current day
     * Sunday which is 1 + Sunday starting day which is also 1 we get 2 which is
     * Monday, to get the correct position we - 1, now we have the correct
     * position */
    if ((day + starting_day - 1) % 7 == 0) {
      printf("\n");
    }
  }

  /* Solution 2 using while loop */
  day = 1;
  while (day <= days_in_month) {
    printf("%3d", day);

    if ((day + starting_day - 1) % 7 == 0) {
      printf("\n");
    }
    day++;
  }

  printf("\n");
  return 0;
}
