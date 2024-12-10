#include<stdio.h>

#define year 2025

void main(){
    printf("\n Year is %d", year);

    #ifdef year
        #undef year
        #define year 2024
        printf("\n Year is %d", year);
    #elif year == 2025
        #define year 2022
        printf("\n Year is %d", year);
    #endif // year
}
