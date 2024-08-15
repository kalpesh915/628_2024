/**
    Short Singed int data type

    Bytes           :   2
    Bits            :   16
    Use             :   15
    Sign            :   1
    Range           :   2^15
    Format Char     :   %d
*/

#include<stdio.h>


void main(){
    short signed int ip1;

    printf("\n Size of ip1 is %d Bytes ", sizeof(ip1));

    printf("\n Enter any Number \t");
    scanf("%d", &ip1);

    printf("\n ip1 is %d", ip1);
}
