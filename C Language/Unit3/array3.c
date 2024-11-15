#include<stdio.h>

void main(){
    int ip[10], i;

    printf("\n Size of ip is %d Bytes ", sizeof(ip));

    ip[0] = 11;
    ip[1] = 22;
    ip[2] = 33;
    ip[3] = 44;
    ip[4] = 55;
    ip[5] = 66;
    ip[6] = 77;
    ip[7] = 88;
    ip[8] = 99;
    ip[9] = 111;

    for(i=0; i<10; i++){
        printf(" %d", ip[i]);
    }
}
