#include<stdio.h>

#define year 2025

void main(){
    printf("\n Year is %d", year);

    #undef year

    printf("\n Year is %d", year);
}
