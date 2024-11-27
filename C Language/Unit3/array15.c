/**
    Insertion Sort
*/

#include<stdio.h>

#define size 5

void main(){
    int ip[size], i, j, tmp, key;

    /// scan values
    for(i=0; i<size; i++){
        printf("\n Enter value for ip[%d] \t", i);
        scanf("%d", &ip[i]);
    }

    /// sorting logic
    for(i=1; i<size; i++){
        key = ip[i];
        j = i - 1;

        /// rest of values
        while(j >= 0 && ip[j] > key){
            ip[j+1] = ip[j];
            j = j - 1;
        }
        ip[j + 1] = key;
    }

    /// printing values
    for(i=0; i<size; i++){
        printf(" %d", ip[i]);
    }
}
