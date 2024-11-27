/**
*/

#define size 3
#include<stdio.h>

void main(){
    float ip[size][size][size];
    int i, j, k;

    for(i=0; i<size; i++){
        for(j=0; j<size; j++){
            for(k=0; k<size; k++){
                printf("\n Enter Value for ip[%d][%d][%d] \t", i, j, k);
                scanf("%f", &ip[i][j][k]);
            }
        }
    }


    for(i=0; i<size; i++){
        printf("\n Block %d Started \n", i);
        for(j=0; j<size; j++){
            for(k=0; k<size; k++){
                printf(" ip[%d][%d][%d] : %f", i, j, k, ip[i][j][k]);
            }
            printf("\n");
        }
    }
}
