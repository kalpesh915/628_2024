#include<stdio.h>

/**
    Local Variable
*/

void main(){
    int x = 10;

    printf("\n Value of x is %d", x);

    {
        int x = 20;
        printf("\n Value of x is %d", x);

        {
            int x = 30;
            printf("\n Value of x is %d", x);
        }

        printf("\n Value of x is %d", x);
    }
}
