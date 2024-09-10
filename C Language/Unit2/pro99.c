#include<stdio.h>

/**
    initialization
    condition
    increment / decrement

    find sum of 10 numbers
*/

void main(){
    int i, tmp, ans = 0;

    i = 1;

    while(i <= 10){
        printf("\n Enter any number \t");
        scanf("%d", &tmp);

        ans += tmp;
        i++;
    }

    printf("\n answer is %d", ans);
}
