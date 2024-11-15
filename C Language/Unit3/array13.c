/**
    Bubble Sort
*/

#include<stdio.h>

#define size 5

void main(){
    int ip[size], i, j, tmp;

    /// scan values
    for(i=0; i<size; i++){
        printf("\n Enter value for ip[%d] \t", i);
        scanf("%d", &ip[i]);
    }

    /// sorting logic
    for(i=0; i<size-1; i++){
        for(j=0; j<size-i-1; j++){
            if(ip[j] > ip[j+1]){
                tmp = ip[j];
                ip[j] = ip[j+1];
                ip[j+1] = tmp;
            }
        }
    }

    /// printing values
    for(i=0; i<size; i++){
        printf(" %d", ip[i]);
    }
}
