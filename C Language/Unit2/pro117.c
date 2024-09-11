#include<stdio.h>
/**
    Nested loop
    12345
    12345
    12345
    12345
    12345
*/

void main(){
    int i, j;

    /// outer
    for(i=1; i<=5; i++){
        /// inner
        for(j=1; j<=5; j++){
            printf("%d", j);
        }
        printf("\n");
    }
}
