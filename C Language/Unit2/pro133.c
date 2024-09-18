#include<stdio.h>
/**
    1
    12
    123
    1234
    12345
    with while loop
*/

void main(){
    int i=1, j=1;

    while(i<=5){
        j = 1;
        while(j<=i){
            printf("%d", j);
            j++;
        }
        i++;
        printf("\n");
    }
}
