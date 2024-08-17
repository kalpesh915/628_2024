#include<stdio.h>
/**
    Logical operators
    ! Not
*/

void main(){
    printf("\n Answer is %d", (10 > 5));
    printf("\n Answer is %d", !(10 > 5));
    printf("\n Answer is %d", (!10 > 5));

    printf("\n Answer is %d", (10 > 5 && 11 > 10));
    printf("\n Answer is %d", !(10 > 5 && 11 > 10));
    printf("\n Answer is %d", (!10 > 5 && 11 > 10));
    printf("\n Answer is %d", (!10 > 15 && 11 > 10));
    printf("\n Answer is %d", (!(!10 > 15) && 11 > 10));

    printf("\n Answer is %d", !(10 > 15 && 11 > 10));
    printf("\n Answer is %d", !(10 > 15 || 11 > 10));
}
