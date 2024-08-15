/**
    long Singed int data type

    Bytes           :   4
    Bits            :   32
    Use             :   31
    Sign            :   0
    Range           :   2^31
    Format Char     :   %ld
*/

#include<stdio.h>


void main(){
    long signed int ip1;

    printf("\n Size of ip1 is %d Bytes ", sizeof(ip1));

    printf("\n Enter any Number \t");
    scanf("%ld", &ip1);

    printf("\n ip1 is %ld", ip1);
}
