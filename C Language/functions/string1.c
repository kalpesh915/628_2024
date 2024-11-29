#include<stdio.h>
#include<string.h>

void main(){
    char ip[100];

    printf("\n Enter any String \t");
    gets(ip);

    printf("\n String is %s", ip);

    strupr(ip);
    printf("\n String is %s", ip);

    strlwr(ip);
    printf("\n String is %s", ip);

    strrev(ip);
    printf("\n String is %s", ip);
}
