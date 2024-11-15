/**
    Selection Sort
*/

#include<stdio.h>

#define size 5

void main(){
    int ip[size], i, j, tmp, min_index;

    /// scan values
    for(i=0; i<size; i++){
        printf("\n Enter value for ip[%d] \t", i);
        scanf("%d", &ip[i]);
    }

    /// sorting logic
    for(i=0; i<size-1; i++){
        min_index = i;

        for(j=i+1; j<size; j++){
            if(ip[j] < ip[min_index]){
                min_index = j;
            }
        }

        tmp = ip[i];
        ip[i] = ip[min_index];
        ip[min_index] = tmp;
    }

    /// printing values
    for(i=0; i<size; i++){
        printf(" %d", ip[i]);
    }
}
