#include<stdio.h>

void main(){
    int ip[] = {11, 22, 33, 44, 55, 66, 77, 88, 99, 111}, i;

    printf("\n Size of ip is %d Bytes ", sizeof(ip));

    for(i=0; i<10; i++){
        printf("\n ip[%d] is %d", i, ip[i]);
    }
}
