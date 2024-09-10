#include<stdio.h>

/**
    initialization
    condition
    increment / decrement

    find max out of 10 numbers
*/

void main(){
    int i, tmp, ans = 0;

    i = 1;

    while(i <= 10){
        printf("\n Enter any number \t");
        scanf("%d", &tmp);

        if(tmp > ans){
            ans = tmp;
        }
        i++;
    }

    printf("\n answer is %d", ans);
}
