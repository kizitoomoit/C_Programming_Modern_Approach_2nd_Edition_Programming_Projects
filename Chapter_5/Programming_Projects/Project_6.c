/* 6. Modify the upc.c program of Section 4.1 so that it checks whether a UPC is
 * valid. After the user enters a UPC, the program will display either VALID or
 * NOT VALID
 *
 *
 * Computing a UPC Check Digit
 *
 * Manufucturers of goods solid U.S and Canadian stores have put a bar code on
 * each product. This code known as a Universal Product Code (UPC), identifies
 * both the manufucturers and the product, Each bar code represents a
 * twelve-digit number, which is usually printed underneath the bars. For
 * example the following bar code comes from a package of Stouffer's French
 * Bread Pepperoni Pizza:
 *
 * The digits:
 * 0   13800 15173 5
 *
 * appear underneath the bar code. The first digit identifies the type of item (
 * 0 or 7 for most items, 2 for items that must be weighed, 3 for drugs and
 * health-related merchandise, and 5 for coupons). The first group of five
 * digits identifies the manufucturers (13800 is the code for Nestle USA's
 * Frozen Food Division). The second group of five digits identifies the product
 * (including pacakge size). The final digit is a "check digi," whose only
 * purpsoe is to help identify an error in the preceding digits. If the UPC is
 * scanned incorrectly, the first 11 digits probably won't be consistent with
 * the last digit, and the store's scanner will reject the entire code.
 *
 * Here's one method of computing the check digit:
 *
 * Add the first, third, fifth, seventh, ninth, and eleventh digits.
 * Add the second, fourth, sixth, eighth, and tenth digits.
 *
 * Multiply the first sum by 3 and add it to the second sum.
 * Subtract 1 from the total.
 * Compute the remainder when the adjusted total is divided by 10.
 * Subtract the remainder from 9.
 *
 * Using the Stouffer's example we get 0 + 3 + 0 + 1 + 1 + 3 = 8 for the first
 * sum and 1 + 8 + 0 + 5 + 7 = 21 for the second sum. Multiplying the first sum
 * by 3 and adding the second yields 45. Subtracting 1 givews 44. The remainder
 * upon diving by 10 is 4. When the remainder is subtracted from 9, the result
 * is 5.
 *
 */

#include <stdio.h>

int main(void) {
  int first = 0, second = 1, third = 3, fourth = 8, fifth = 0, sixth = 0,
      seventh = 1, eighth = 5, ninth = 1, tenth = 7, eleventh = 3,
      check_digit = 5, first_sum, second_sum, total;

  first_sum = first + third + fifth + seventh + ninth + eleventh;
  second_sum = second + fourth + sixth + eighth + tenth;

  printf("Enter ther first (single) digit: ");
  scanf("%d", &first);
  printf("Enter the first group of five digits: ");
  scanf("%d%d%d%d%d", &second, &third, &fourth, &fifth, &sixth);
  printf("Enter check digit: ");
  scanf("%d", &check_digit);

  total = 3 * first_sum + second_sum;

  printf("%d\n", (9 - (total - 1) % 10));
  if ((9 - (total - 1) % 10) == check_digit) {
    printf("VALID\n");
  } else {
    printf("NOT VALID\n");
  }

  return 0;
}
