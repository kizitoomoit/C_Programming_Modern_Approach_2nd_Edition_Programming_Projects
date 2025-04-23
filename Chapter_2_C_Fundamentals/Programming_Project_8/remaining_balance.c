/* 8. Write a program that calculates the remaining balance on a loan after the
 * first, second, and third monthly payments:
 *
 * Enter amount of loan: 20000.00
 * Enter interest rate: 6.0
 * Enter monthly payment: 386.66
 *
 * Balance remaining after first payment: $19713.34
 * Balance remaining after seond payment: $19425.25
 * Balance remaining after third paymnet: $19135.71
 *
 * Display each balance with two digits after the decimal point. Hint: Each
 * month, the balance is decreased by the amount of the payment, but increased
 * by the balance times the monthly interest rate. To find the monthly interest
 * rate, convert the interest rate entered by the user to a percentage and divid
 * it by 12.
 *
 */

/* Solution */

#include <stdio.h>

int main(void) {
  /* Declare variables types to be used */
  float loan, interest_rate, monthly_rate, monthly_payment;

  /* Prompt the user to enter the loan amount */
  printf("Enter amount of loan: ");
  /* Capture the users input and store it on loan variable */
  scanf("%f", &loan);

  /* Prompt the user to enter the interest rate */
  printf("Enter interest rate: ");
  /* Capture the user's interest rate and store it on the interest_rate variable
   */
  scanf("%f", &interest_rate);

  /* Prompt the user to enter the monthly payment */
  printf("Enter monthly_payment: ");
  /* Capture the user's input and store it on monthly_payment variable */
  scanf("%f", &monthly_payment);

  /* Calculate the monthly rate by taking the interest rate and diving it by 12
   * then get the percentage */
  monthly_rate = ((interest_rate / 12) + 100) / 100;

  /* Calculate the balance after the first payment */
  loan = loan * monthly_rate - monthly_payment;
  printf("Balance remaining after first payment: %.2f\n", loan);

  /* Calculate the balance after the second payment */
  loan = loan * monthly_rate - monthly_payment;
  printf("Balance remaining after second payment: %.2f\n", loan);

  /* Calculate the balance after the third payment */
  loan = loan * monthly_rate - monthly_payment;
  printf("Balance remaining after third payment: %.2f\n", loan);

  return 0;
}
