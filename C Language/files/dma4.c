#include<stdio.h>

void main(){
    int *ptr, blocks, i;

    printf("\n Enter Number of Blocks to allocate \t");
    scanf("%d", &blocks);

    ptr = (int*) calloc(blocks, sizeof(int));



    for(i=0; i<blocks; i++){
        printf("\n Address is %d and value is %d", ptr, *ptr);
        ptr++;
    }

    free(ptr);
}
