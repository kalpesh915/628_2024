/**
    2D Array

    ip
        r   0   1   2
    c
    0
    1               20
    2
*/

#define size 3
#include<stdio.h>

void main(){
    int ip[size][size] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int i, j;
    /// printf("Size of Array is %d", sizeof(ip));

    for(i=0; i<size; i++){
        for(j=0; j<size; j++){
            printf(" ip[%d][%d] : %d", i, j, ip[i][j]);
        }
        printf("\n");
    }

}
