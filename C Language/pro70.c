#include<stdio.h>

/**
    find currency note dinomination for given amount

    25682

    500 * 51    =   25500
    200 * 0     =   00000
    100 * 1     =   00100
    50  * 1     =   00050
    20  * 1     =   00020
    10  * 1     =   00010
    5   * 0     =   00000
    2   * 1     =   00002
    1   * 0     =   00000
                    -----
                    25682
*/

void main(){
    int amount, tmp;

    printf("\n Enter Any Amount \t");
    scanf("%d", &amount);

    tmp = amount / 500;
    printf("\n Notes of Rs. 500 : %d", tmp);
    amount = amount % 500;

    tmp = amount / 200;
    printf("\n Notes of Rs. 200 : %d", tmp);
    amount = amount % 200;

    tmp = amount / 100;
    printf("\n Notes of Rs. 100 : %d", tmp);
    amount = amount % 100;

    tmp = amount / 50;
    printf("\n Notes of Rs. 50 : %d", tmp);
    amount = amount % 50;

    tmp = amount / 20;
    printf("\n Notes of Rs. 20 : %d", tmp);
    amount = amount % 20;

    tmp = amount / 10;
    printf("\n Notes of Rs. 10 : %d", tmp);
    amount = amount % 10;

    tmp = amount / 5;
    printf("\n Notes of Rs. 5 : %d", tmp);
    amount = amount % 5;

    tmp = amount / 2;
    printf("\n Notes of Rs. 2 : %d", tmp);
    amount = amount % 2;

    printf("\n Notes of Rs. 1 : %d", amount);

}
