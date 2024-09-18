#include<stdio.h>
/**
    Continue in for loop
*/

void main(){
    int i;

    for(i=1; i<=100; i++){
        if(i %2 == 1){
            continue;
        }
        printf(" %d", i);
    }
}
