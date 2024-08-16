#include<stdio.h>

void main(){
    long double ip1;

    printf("\n Size of Double Variable is %d", sizeof(ip1));

    printf("\n Enter any Value \t");
    scanf("%Lf", &ip1);

    printf("\n Value of ip1 is %Lf", ip1);
    printf("\n Value of ip1 is %.2Lf", ip1);
}
