#include<stdio.h>

void main(){
    int size, *ptr, blocks, i;

    printf("\n Enter Number of Bytes to allocate \t");
    scanf("%d", &size);

    ptr = (int*) malloc(size);

    blocks = size / sizeof(int);

    for(i=0; i<blocks; i++){
        printf("\n Address is %d and value is %d", ptr, *ptr);
        ptr++;
    }

    printf("\n Enter New Number of Bytes to allocate \t");
    scanf("%d", &size);

    realloc(ptr, size);
    blocks = size / sizeof(int);

    for(i=0; i<blocks; i++){
        printf("\n Address is %d and value is %d", ptr, *ptr);
        ptr++;
    }

    free(ptr);
}
