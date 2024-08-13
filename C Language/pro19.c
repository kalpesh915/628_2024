#include<stdio.h>

/// global variables

int x = 100;

void main(){
    int x = 10;

    printf("\n value of x is %d", x);

    {
        int x = 20;
        printf("\n value of x is %d", x);

        {
            int x = 30;
            printf("\n value of x is %d", x);
        }

        printf("\n value of x is %d", x);
    }

    printf("\n value of x is %d", x);
}
