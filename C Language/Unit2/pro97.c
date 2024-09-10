#include<stdio.h>

/**
    initialization
    condition
    increment / decrement

    sum of 1 to 10
*/

void main(){
    int i, sum = 0;

    i = 1;

    while(i <= 10){
        sum = sum + i;
        i++;
    }

    printf("\n answer is %d", sum);
}
