#include<stdio.h>

/**
    Global Variable
*/

int x = 100;

void main(){

    printf("\n Value of x is %d", x);

    {
        printf("\n Value of x is %d", x);

        {
            printf("\n Value of x is %d", x);
        }

        printf("\n Value of x is %d", x);
    }
}
