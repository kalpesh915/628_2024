#include<stdio.h>

/**
    with static keyword
*/

void msg();

void main(){
    int i;

    for(i=1; i<=10; i++){
        msg();
    }
}

void msg(){
    static int count = 1;
    printf(" %d", count);
    count++;
}
