#include<stdio.h>
/**
    Nested loop
        1
       12
      123
     1234
    12345
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
            printf("%d", j);
        }
        printf("\n");
    }
}
