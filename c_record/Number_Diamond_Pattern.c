#include <stdio.h>
// This code prints a pyramid pattern with decreasing numbers on the left and increasing numbers on the right.
// The number of rows in the pyramid is equal to the value of the variable `n`.
int main() {
  int n;
  // Read the number of rows from the user.
  scanf("%d", &n);
  // Iterate from 0 to `n`, printing a row of spaces and numbers for each row.
  for (int i = 0; i <= n; i++) {
    // Print `2*(n-i)` spaces.
    for (int j = 0; j < 2 * (n - i); j++) {
      printf(" ");
    }	
    // Print `2*(i-1)` numbers, decreasing from 9 to 0.
    for (int k = 0; k <= 2 * (i - 1); k++) {
      printf("%d ", 9 - k);
    }
    // Print a newline character.
    printf("\n");
  }
  // Iterate from `n-1` down to 1, printing a row of spaces and numbers for each row.
  for (int i = n - 1; i > 0; i--) {
    // Print `2*(n-i)` spaces.
    for (int j = 0; j < 2 * (n - i); j++) {
      printf(" ");
    }
    // Print `2*(i-1)` numbers, increasing from 0 to 9.
    for (int k = 0; k <= 2 * (i - 1); k++) {
      printf("%d ", k);
    }
    // Print a newline character.
    printf("\n");
  }
 return 0;
}
