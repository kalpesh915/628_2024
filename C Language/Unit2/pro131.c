#include<stdio.h>
/**
    while loop with continue statement
*/

void main(){
    int ip = 1;

    while(ip <= 10){
        if(ip == 5){
            continue;
        }
        printf(" %d", ip);
        ip++;
    }
}
