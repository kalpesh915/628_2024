#include<stdio.h>
/**
    Nested loop
    11111
    22222
    33333
    44444
    55555
*/

void main(){
    int i, j;

    /// outer
    for(i=1; i<=5; i++){
        /// inner
        for(j=1; j<=5; j++){
            printf("%d", i);
        }
        printf("\n");
    }
}
