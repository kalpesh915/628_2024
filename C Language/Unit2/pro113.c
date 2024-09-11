#include<stdio.h>

/**
    print table with for loop
*/

void main(){
    int i = 1, ip;

    printf("\n Enter any number to print table \t");
    scanf("%d", &ip);

    for(; i<=10; ){
        printf("\n %5d * %5d : %5d", ip, i, ip * i);
        i++;
    }
}
