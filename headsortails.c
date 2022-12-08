#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Made by Alexis.D AKA Aldbg74 2022, for using ;
 gcc flip_coin.c -o flip_coin
 */


int main() {
  // Seed the random number generator
  srand(time(0));

  // Generate a random number in the range [1, 4]
  int flip = rand() % 4 + 1;

  if (flip == 1) {
    printf("Heads!\n");
  } else if (flip == 2) {
    printf("Tails!\n");
  } else if (flip == 3) {
    printf("Edge!\n");
  } else {
    printf("Fell off the table!\n");
  }

  return 0;
}