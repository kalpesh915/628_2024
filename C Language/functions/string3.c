#include<stdio.h>
#include<string.h>

/**
    strcat(destination, source);
*/

void main(){
    char ip1[100], ip2[100];

    printf("\n Enter any String \t");
    gets(ip1);
    printf("\n Enter any String \t");
    gets(ip2);

    strcat(ip1, ip2);

    printf("\n String 1 is %s", ip1);
    printf("\n String 2 is %s", ip2);
}
