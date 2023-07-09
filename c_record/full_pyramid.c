#include <stdio.h>
/* This program prints a full pyramid pattern. */
void main() {
    /* Declare variables `i`, `j`, and `n`. */
    int n, i, j;
    /* Read the number of rows from the user. */
    scanf("%d", &n);
    /* Check if the input is valid. */
    if (n < 1 || n > 24) {
        printf("Invalid Input");
    } else {
        /* Print the pattern. */
        for (i = 0; i < n; i++) {
            /* Print `n - i` spaces. */
            for (j = 2*(n – i)-1; j > 0; j--) {
                printf(" ");
            }
            /* Print `2 * i + 1` stars. */
            for (j = 0; j < 2 * i + 1; j++) {
                printf("* ");
            }
            /* Print a newline character. */
            printf("\n");
        }
    }
}
