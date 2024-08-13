#include<stdio.h>

void main(){
    int ip1, ip2, sum;

    printf("\n Enter value for ip1 and ip2 \t");
    scanf("%d", &ip1);
    scanf("%d", &ip2);

    sum = ip1 + ip2;

    printf("\n Sum of %d and %d is %d", ip1, ip2, sum);
}
