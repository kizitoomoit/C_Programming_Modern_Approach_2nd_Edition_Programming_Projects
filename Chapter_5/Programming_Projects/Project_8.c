/* 8. The following table shows the daily flights from one city to another:
 *
 * Departure time      Arrival time
 *   8:00 a.m.         10:16 a.m.
 *   9:43 a.m.         11:52 a.m.
 *  11:19 a.m.          1:31 p.m.
 *  12:47 p.m.          3:00 p.m.
 *   2.00 p.m.          4:08 p.m.
 *   3:45 p.m.          5.55 p.m.
 *   7:00 p.m.          9:20 p.m.
 *   9:45 p.m.         11:58 p.m.
 *
 *   Write a program that asks the user to enter a time (expressed in hours and
 * minutes, using the 24-hour clock). The program then displays the departure
 * and arrival times for the flight whose departure time is closest to that
 * entered by the user:
 *
 *   Enter a 24-hour time: 13:15
 *   Closest departure time is 12:47 pm., arriving at 3:00 p.m.
 *
 *   Hint: convert the input into a time expressed in minutes, since midnight,
 * and compare it to the depature times, also expressed in minutes since
 * midnight. For example, 13:15 is 13 x 60 + 15 = 795 minutes since midnight,
 * which is closer to 12:47 p.m. ( 767 minutes since midnight) than to any of
 * the other depature times.
 */

#include <stdio.h>
#define HOUR 60

int main(void) {
  int hours = 13, minutes = 15, minutes_since_midnight, eight_am, nine_43_am,
      eleven_19_am, twelve_47_pm, two_pm, three_45_pm, seven_pm, nine_45_pm,
      midnight;
  // printf("Enter a 24-hour time: ");
  // scanf("%d:%d", &hours, &minutes);

  minutes_since_midnight = hours * HOUR + minutes;

  eight_am = 8 * HOUR + 0;
  nine_43_am = 9 * HOUR + 43;
  eleven_19_am = 11 * HOUR + 19;
  twelve_47_pm = 12 * HOUR + 47;
  two_pm = 14 * HOUR + 0;
  three_45_pm = 15 * HOUR + 45;
  seven_pm = 19 * HOUR + 0;
  nine_45_pm = 21 * HOUR + 45;
  midnight = 23 * HOUR + 59;

  if (minutes_since_midnight > midnight || minutes_since_midnight < 0)
    printf("Invalid time: \n");
  else {
    printf("Closest departure time is: ");

    if (minutes_since_midnight >= 1 && minutes_since_midnight < eight_am)
      printf("8:00 a.m., arriving at 10:16 a.m.\n");

    if (minutes_since_midnight >= eight_am &&
        minutes_since_midnight < nine_43_am) {
      if (nine_43_am - minutes_since_midnight <
          minutes_since_midnight - eight_am)
        printf("9:43 am., arriving at 11:52 a.m.\n");
      else
        printf("8:00 a.m, arriving at 10:16 a.m\n");
    }

    if (minutes_since_midnight >= nine_43_am &&
        minutes_since_midnight < eleven_19_am) {
      if (eleven_19_am - minutes_since_midnight <
          minutes_since_midnight - nine_43_am)
        printf("11:19 a.m, arriving at 1:31 p.m.\n");
      else
        printf("9:43 am., arriving at 11:52 a.m.\n");
    }

    if (minutes_since_midnight >= eleven_19_am &&
        minutes_since_midnight < twelve_47_pm) {
      if (twelve_47_pm - minutes_since_midnight <
          minutes_since_midnight - eleven_19_am)
        printf("12:47 p.m., arrving at 3:00 p.m.\n");
      else
        printf("11:19 a.m., arriving at 1:31 p.m.\n");
    }

    if (minutes_since_midnight >= twelve_47_pm &&
        minutes_since_midnight < two_pm) {
      if (two_pm - minutes_since_midnight <
          minutes_since_midnight - twelve_47_pm)
        printf("2:00 p.m., arriving at 4:08 p.m.\n");
      else
        printf("12:47 p.m., arriving at 3:00 p.m.\n");
    }

    if (minutes_since_midnight >= two_pm &&
        minutes_since_midnight < three_45_pm) {
      if (three_45_pm - minutes_since_midnight <
          minutes_since_midnight - two_pm)
        printf("3:45 p.m., arriving at 5:55 p.m.\n");
      else
        printf("2:00 p.m., arriving at 4:08 p.m.\n");
    }

    if (minutes_since_midnight >= three_45_pm &&
        minutes_since_midnight < seven_pm) {
      if (seven_pm - minutes_since_midnight <
          minutes_since_midnight - three_45_pm)
        printf("7:00 p.m., arriving at 9:20 p.m.\n");
      else
        printf("3:45 p.m., arriving at 5:55 p.m.\n");
    }

    if (minutes_since_midnight >= seven_pm &&
        minutes_since_midnight < nine_45_pm) {
      if (nine_45_pm - minutes_since_midnight <
          minutes_since_midnight - seven_pm)
        printf("9:45 p.m., arriving at 11:58 p.m.\n");
      else
        printf("7:00 p.m., arriving at 9:20 p.m.\n");
    }

    if (minutes_since_midnight >= nine_45_pm &&
        minutes_since_midnight < midnight)
      printf("9:45 p.m., arriving at 11:58 p.m.\n");
  }

  return 0;
}
