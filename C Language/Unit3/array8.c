#include<stdio.h>
#define size 10
void main(){
    int ip[size], i;

    printf("\n Size of ip is %d Bytes ", sizeof(ip));

    for(i=0; i<size; i++){
        printf("\n Enter value for ip[%d] \t", i);
        scanf("%d", &ip[i]);
    }

    for(i=0; i<size; i++){
        printf(" %d", ip[i]);
    }
}
