/* 8. Programming Project 8 in Chapter 2 asked you to write a program that
 * calculates the remaining balance on a loan after the first, second, and third
 * monthly payments. Modify the program so that it also asks the user to enter
 * the number of payments and then displays the balance remaining after each of
 * these payments */

/* Recap Chapter 2 Project 8. write a program that calculates the remaining
 * balance on a loan after the first, second and third monthly payments:
 *
 * Enter amount of loan: 20000.00
 * Enter interest rate: 6.0
 * Enter monthly payment: 386.66
 *
 * Balance remaining after first payment: $19713.34
 * Balance remaining after second payment: $19425.25
 * Balance remaining after third payment: $19135.71
 *
 * Display each balance with two digits after the decimal point. Hint: Each
 * month, the balance is decreased by the amount of the payment, but increased
 * by the balance times the monthly interest rate. To find the monthly interest
 * reate, convert the interest rate entered by the user to a percentage and
 * divide it by 12.*/

/* Solution */

#include <stdio.h>

int main(void) {
  float loan, interest_rate, monthly_payment, monthly_rate;

  printf("Enter amount of loan: ");
  scanf("%f", &loan);

  printf("Enter interes rate: ");
  scanf("%f", &interest_rate);

  printf("Enter monthly_payment: ");
  scanf("%f", &monthly_payment);

  monthly_rate = ((interest_rate / 12) + 100) / 100;

  printf("Monthly rate: %f\n", monthly_rate);

  loan = (loan * monthly_rate) - monthly_payment;
  printf("Balance remaining after first payment: %.2f\n", loan);

  loan = (loan * monthly_rate) - monthly_payment;
  printf("Balance remaining after second payment: %.2f\n", loan);
  loan = (loan * monthly_rate) - monthly_payment;
  printf("Balance remaining after third payment: %.2f\n", loan);
  return 0;
}
