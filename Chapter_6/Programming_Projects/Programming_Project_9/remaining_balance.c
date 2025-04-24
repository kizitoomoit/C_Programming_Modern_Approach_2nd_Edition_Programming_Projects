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
  /* Declare variables to be used */
  float number_of_payments, loan, interest_rate, monthly_payment, monthly_rate;

  /* Prompt the user to enter the loan amount */
  printf("Enter amount of loan: ");
  /* Capture the user's loan amount input and store it on the loan variable */
  scanf("%f", &loan);

  /* Prompt the user to enter interest rate */
  printf("Enter interest rate: ");
  /* Capture the user's interest rate and store it on the interest_rate variable
   */
  scanf("%f", &interest_rate);

  /* Prompt th user to enter monthly payment */
  printf("Enter monthly_payment: ");
  /* Capture the user's monthly payment input and store it on the montly_payment
   * variable */
  scanf("%f", &monthly_payment);

  /* Prompt the user to enter number of payments */
  printf("Enter number of payments: ");
  /* Capture the user's input and store it on the number_of_payments variable */
  scanf("%f", &number_of_payments);

  /* Calculate the monthly rate by dividing the current rate by 12 then convert
   * that into a percentage */
  monthly_rate = ((interest_rate / 12) + 100) / 100;

  /* The for loops is used to print the balance according the number of payments
   * the user entered */
  for (int i = 1; i <= number_of_payments; i++) {

    loan = loan * monthly_rate - monthly_payment;
    printf("Balance remaining after %d payment: %.2f\n", i, loan);
  }

  return 0;
}
