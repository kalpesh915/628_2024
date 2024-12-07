#include<stdio.h>

/**
    formal parameter
*/

void msg(int);

int x = 100;

void main(){
    msg(10);
}

void msg(int x){ /// x is formal parameter variable / local
    printf("\n Value of x is %d", x);
}
