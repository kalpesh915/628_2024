/**
    long unSinged int data type

    Bytes           :   4
    Bits            :   32
    Use             :   32
    Sign            :   0
    Range           :   2^32
    Format Char     :   %lu
*/

#include<stdio.h>


void main(){
    long unsigned int ip1;

    printf("\n Size of ip1 is %d Bytes ", sizeof(ip1));

    printf("\n Enter any Number \t");
    scanf("%lu", &ip1);

    printf("\n ip1 is %lu", ip1);
}
