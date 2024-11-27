/**
*/

#define size 3
#include<stdio.h>

void main(){
    int ip[size][size] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int i, j, max = 0;

    for(i=0; i<size; i++){
        for(j=0; j<size; j++){
            printf("\n Enter value for ip[%d][%d] \t", i, j);
            scanf("%d", &ip[i][j]);
        }
    }

    for(i=0; i<size; i++){
        for(j=0; j<size; j++){
            if(max < ip[i][j]){
                max = ip[i][j];
            }
        }
    }

    printf("\n Max is %d", max);
}
