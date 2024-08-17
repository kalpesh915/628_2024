#include<stdio.h>
/**
    Compound Assignment operator, short hand operators
*/

void main(){
    int ip1 = 10;
    printf("\n Value of ip1 is %d", ip1);

    ip1 += 10; /// ip1 = ip1 + 10;
    printf("\n Value of ip1 is %d", ip1);
    ip1 -= 10;
    printf("\n Value of ip1 is %d", ip1);
    ip1 *= 10;
    printf("\n Value of ip1 is %d", ip1);
    ip1 /= 10;
    printf("\n Value of ip1 is %d", ip1);
    ip1 %= 10;
    printf("\n Value of ip1 is %d", ip1);
}
