#include<stdio.h>
/**
    Nested loop
    *****
    *****
    *****
    *****
    *****
*/

void main(){
    int i, j;

    /// outer
    for(i=1; i<=5; i++){
        /// inner
        for(j=1; j<=5; j++){
            printf(" *");
        }
        printf("\n");
    }
}
