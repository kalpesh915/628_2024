#include<stdio.h>

/**
    without static keyword
*/

void msg();

void main(){
    int i;

    for(i=1; i<=10; i++){
        msg();
    }
}

void msg(){
    int count = 1;
    printf(" %d", count);
    count++;
}
