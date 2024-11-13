#include <stdio.h>

void printPattern(int n) {
    int i, j;
    for (i = 1; i <= n; i++) {
        int num = i;
        /// Loop 1: Print leading spaces and descending numbers in the same loop
        for (j = 1; j <= n + i - 1; j++) {
            if (j <= n - i) {
                printf(" ");
            } else {
                printf("%d", num);
                num = (j < n) ? num - 1 : num + 1;
            }
        }

        /// Move to the next line after each row
        printf("\n");
    }
}

int main() {
    int n = 5;
    printPattern(n);
    return 0;
}
