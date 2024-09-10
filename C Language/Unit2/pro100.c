#include<stdio.h>

/**
    initialization
    condition
    increment / decrement

    Print Table of Entered Number
*/

void main(){
    int i, ip;

    i = 1;

    printf("\n Enter any number to print Table \t");
    scanf("%d", &ip);

    while(i <= 10){
        printf("\n %5d * %5d : %5d", ip, i, ip * i);
        i++;
    }
}
