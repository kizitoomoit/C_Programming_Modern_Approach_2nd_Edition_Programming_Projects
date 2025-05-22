/* MOdify the broker.c program of Section 5.2 by making both of the following
changes:
* (a) Ask the user to enter the number of shares and the price per share,
instead of the value of the trade.
* (b) Add statements that compute the commision charged by a rival broker ($33
plus 3c per share for fewer than 2000 shares; $33 plus 2c per share for 2000
shares or more). Display the rival's commision as well as the commision charged
by the original broker.
*
*
* Calculating a Broker's Commission
*
* When stocks are sold or purchased through a broker, the broker's commission is
often computed using a sliding scale that depends upone the value of the stocks
* traded. Let's say that a broker charges the amounts shown in the following
table:
*
* Transaction size            Commission rate
* Under $2,500                $30 + 1.7%
* $2,500 - $6,250             $56 + 0.66%
* $6,250 - $20,000            $76 + 0.34%
* $20,000 - $50,000           $100 + 0.22%
* $50,000 - $500,000          $155 + 0.11%
* Over $500,000               $255 + 0.09%
*
* The minimum charge is $39. Our next program asks the user to enter the amount
of the trade, then displays the amount of the commission:
*
* Enter value of trade: 30000
* Commission: $166.00
*
* The heart of the program is a cascaded if statement that determins which range
the trade falls into.
*
* broker.c
* Calculate a broker's commission
*
#include <stdio.h>

 int main(void)
 {

  float commission, value;

  printf("Enter value of trade: ");
  scanf("%f", &value);

  if (value < 2500.00f){
    commission = 30.00f + .017f * value;
  } else if (value < 6250.00f){
    commission = 56.00f + .0066f * value;
  } else if ( value < 20000){
    commission = 76.00f + .0034f * value;
  } else if (value < 50000){
    commission = 100.00f + .0022f * value;
  } else if (value < 500000) {
    commission = 155.00f + .0011f * value;
  } else {
    commission = 255.00f + .0009f * value;
  }


  if ( commission < 39.00f){
    commission = 39.00f;
  }

  printf("Commission: $%.2f\n", commission);

  return 0;
 }

*/

#include <stdio.h>

int main(void) {
  float value, rival_commission, commission, shares, price_per_share;

  printf("Enter number of shares: ");
  scanf("%f", &shares);
  printf("Enter price per share: ");
  scanf("%f", &price_per_share);

  // Calcuate value of shares
  value = shares * price_per_share;

  if (value < 2500.00f) {
    commission = 30.00f + 0.17f * value;
  } else if (value < 6250.00f) {
    commission = 56.00f + .0066f * value;
  } else if (value < 20000) {
    commission = 76.00f + .0034f * value;
  } else if (value < 50000) {
    commission = 100.00f + .0022f * value;
  } else if (value < 500000) {
    commission = 155.00f + .0011f * value;
  } else {
    commission = 255.00f + .0009f * value;
  }

  if (commission < 39.00f) {
    commission = 39.00f;
  }

  printf("Original borkers commission: $%.2f\n", commission);

  if (shares < 2000) {
    rival_commission = 33.00f + .03f;
  } else {
    rival_commission = 33.00f + 0.2f;
  }

  printf("Rival's commission: %f\n", rival_commission);

  return 0;
}
