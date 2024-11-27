/**
*/

#define size 3
#include<stdio.h>

void main(){
    int ip[size][size][size];
    /// printf("\n Size of Array is %d Bytes", sizeof(ip));

    int i, j, k;

    for(i=0; i<size; i++){
        for(j=0; j<size; j++){
            for(k=0; k<size; k++){
                printf("\n Enter Value for ip[%d][%d][%d] \t", i, j, k);
                scanf("%d", &ip[i][j][k]);
            }
        }
    }


    for(i=0; i<size; i++){
        printf("\n Block %d Started \n", i);
        for(j=0; j<size; j++){
            for(k=0; k<size; k++){
                printf(" ip[%d][%d][%d] : %d", i, j, k, ip[i][j][k]);
            }
            printf("\n");
        }
    }
}
