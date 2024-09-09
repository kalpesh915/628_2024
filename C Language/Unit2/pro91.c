#include<stdio.h>

/**
    find payable light bill amount of entered units
    units       rate
    000-100     10
    101-200     11
    201-300     12
    300-nnn     13

    ex. 112
    100 * 10    =   1000
    012 * 11    =   0132
                    ----
                    1132
*/

void main(){
    int units, bill, tmp;

    printf("\n Enter units \t");
    scanf("%d", &units);

    if(units >= 0 && units <= 100){
        bill = units * 10;
    }else if(units > 100 && units <= 200){
        tmp = units - 100;
        bill = (tmp * 11) + (1000);
    }else if(units > 200 && units <= 300){
        tmp = units - 200;
        bill = (tmp * 12) + (1000 + 1100);
    }else if(units > 300){
        tmp = units - 300;
        bill = (tmp * 13) + (1000 + 1100 + 1200);
    }


    printf("\n Payable Bill Amount is %d", bill);
}

