#include<stdio.h>

/// local variables

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
