#include<stdio.h>
/**
    while loop with continue statement
*/

void main(){
    int ip = 0;

    while(ip <= 10){
        ip++;
        if(ip == 5){
            continue;
        }
        printf(" %d", ip);

    }
}
