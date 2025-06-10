/* Write a program that finds the largest and smallest of four integers entered
 * by the user Enter four integers: 21 43 10 35 Largest: 43 Smallest: 10
 *
 * Use a as few if statements as possible. Hint: Four if statements are
 * sufficient. */

#include <stdio.h>

int main(void) {
  int largest, smallest, min_1, min_2, max_1, max_2, first, second, third,
      fourth;

  printf("Enter four integers: ");
  scanf("%d%d%d%d", &first, &second, &third, &fourth);

  // Get the smallest and largest between the two pairs
  if (first > second) {
    max_1 = first;
    min_1 = second;
  } else {
    max_1 = second;
    min_1 = first;
  }

  if (third > fourth) {
    max_2 = third;
    min_2 = fourth;
  } else {
    max_2 = fourth;
    min_2 = third;
  }

  // Get the overal largest from the previous max_1 and max_2
  if (max_1 > max_2) {
    largest = max_1;
  } else {
    largest = max_2;
  }

  if (min_1 > min_2) {
    smallest = min_2;
  } else {
    smallest = min_1;
  }

  printf("Largest: %d\n", largest);
  printf("Smallest: %d\n", smallest);

  return 0;
}
