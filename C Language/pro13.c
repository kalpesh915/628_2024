#include<stdio.h>

#define p printf

void main(){
    int ip1, ip2, sum;

    p("\n Enter value for ip1 \t");
    scanf("%d", &ip1);
    p("\n Enter value for ip2 \t");
    scanf("%d", &ip2);

    p("\n Sum is %d", ip1 + ip2);
}
