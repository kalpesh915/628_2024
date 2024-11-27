/**
    2D Array

    ip
        r   0   1   2   3   4
    c
    0
    1               20
    2
    3
    4                   33
*/

#include<stdio.h>

void main(){
    int ip[5][5];
    printf("Size of Array is %d", sizeof(ip));
    ip[1][2] = 20;
    ip[4][3] = 33;
}
