/* In one state, single residents are subject to the following income tax:
 *
 * Income              Amount of tax
 * Not over $750       1% of income
 * $750 - $2,250       $7.50   plus 2% of amount over $750
 * $2,250 - $3,740     $37.50  plus 3% of amount over $2,250
 * $3,750 - $5,250     $82.50  plus 4% of amount over $3,750
 * $5,250 - $7,000     $142.50 plus 5% of amount over $5,250
 * Over $7,000         $230.00 plus 6% of amount over $7,000
 *
 * Write a program that asks the user to enter the amount of taxable income,
 * then displays the tax due.
 *
 */

#include <stdio.h>

int main(void) {
  float tax, taxable_income;

  printf("Enter the amount of taxable income: ");
  scanf("%f", &taxable_income);

  if (taxable_income < 750) {
    tax = taxable_income * 0.01f;
  } else if (taxable_income <= 2250) {
    tax = 7.50f + 0.02f * (taxable_income - 750);
  } else if (taxable_income <= 3750) {
    tax = 37.50f + 0.03f * (taxable_income - 2250);
  } else if (taxable_income <= 5250) {
    tax = 82.50f + 0.04f * (taxable_income - 3750);
  } else if (taxable_income <= 7000) {
    tax = 142.50f + 0.05f * (taxable_income - 5250);
  } else {
    tax = 230.00f + 0.06 * (taxable_income - 7000);
  }

  printf("Tax due: %.2f\n", tax);

  return 0;
}
