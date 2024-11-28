/**
    UDF 2 : With Parameters no Return value
*/

#include<stdio.h>

void sum(int, int); /// declaration

void main(){
    int i, j;

    printf("\n Enter value for i \t");
    scanf("%d", &i);
    printf("\n Enter value for j \t");
    scanf("%d", &j);

    sum(i, j);
}

/// Definition
void sum(int ip1, int ip2){
    printf("\n Sum of %d and %d is %d", ip1, ip2, ip1+ip2);
}
