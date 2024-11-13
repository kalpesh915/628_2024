#include <stdio.h>

void printPattern(int n) {
    int i, j;
    for (i = 1; i <= n; i++) {
        /// Print leading spaces and numbers in a single loop
        for (j=1; j<= n+i-1; j++) {
            if (j <= n - i) {
                /// Print spaces
                printf(" ");
            } else if (j <= n) {
                /// Print descending numbers
                printf("%d", n - j + i + 1);
            } else {
                /// Print ascending numbers
                printf("%d", j - n + 1);
            }
        }
        printf("\n");
    }
}

int main() {
    int n = 5;
    printPattern(n);
    return 0;
}
