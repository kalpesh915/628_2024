#include<stdio.h>

enum weekdays {
    sunday,
    monday,
    tuesday,
    wednesday,
    thursday,
    friday,
    saturday
};

void main(){
    enum weekdays day = friday;

    printf("\n Value of day is %d", day);
}