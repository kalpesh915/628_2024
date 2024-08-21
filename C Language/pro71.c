#include<stdio.h>

/**
    generate simple light bill application
*/

void main(){
    int startunits, endunits, diff, rate, bill;

    printf("\n Enter Stating Units \t");
    scanf("%d", &startunits);
    printf("\n Enter End Units \t");
    scanf("%d", &endunits);
    printf("\n Enter Unit Rate \t");
    scanf("%d", &rate);

    diff = (endunits - startunits);
    bill = diff * rate;

    printf("\n Units is %d and bill is %d", diff, bill);
}
