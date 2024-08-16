#include<stdio.h>

void main(){
    double ip1;

    printf("\n Size of Double Variable is %d", sizeof(ip1));

    printf("\n Enter any Value \t");
    scanf("%lf", &ip1);

    printf("\n Value of ip1 is %lf", ip1);
    printf("\n Value of ip1 is %.2lf", ip1);
}
