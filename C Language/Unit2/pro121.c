#include<stdio.h>
/**
    Nested loop
         *
        * *
       * * *
      * * * *
     * * * * *
*/

void main(){
    int i, j, s;

    /// outer
    for(i=1; i<=5; i++){
        /// inner
        for(s=4; s>=i; s--){
            printf("-");
        }
        for(j=1; j<=i; j++){
            printf(" *");
        }
        printf("\n");
    }
}
