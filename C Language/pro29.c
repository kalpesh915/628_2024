/**
    Short unSinged int data type

    Bytes           :   2
    Bits            :   16
    Use             :   16
    Sign            :   0
    Range           :   2^16
    Format Char     :   %u
*/

#include<stdio.h>


void main(){
    short unsigned int ip1;

    printf("\n Size of ip1 is %d Bytes ", sizeof(ip1));

    printf("\n Enter any Number \t");
    scanf("%u", &ip1);

    printf("\n ip1 is %u", ip1);
}
