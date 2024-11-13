#include<stdio.h>

void main(){
    int i, j;

    for(i=1; i<=10; i++){
        for(j=1; j<=10; j++){
            if(j==5){
                break;
            }
            printf(" i: %d j: %d",i, j);
        }
        printf("\n");
    }
}
