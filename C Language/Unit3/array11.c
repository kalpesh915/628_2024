#include<stdio.h>
#define size 10
void main(){
    int ip[size], i, min=0;

    printf("\n Size of ip is %d Bytes ", sizeof(ip));

    for(i=0; i<size; i++){
        printf("\n Enter value for ip[%d] \t", i);
        scanf("%d", &ip[i]);
    }

    min = ip[0];
    for(i=0; i<size; i++){
        if(min > ip[i]){
            min = ip[i];
        }
    }

    printf("\n Min of Array is %d", min);
}