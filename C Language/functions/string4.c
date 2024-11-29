#include<stdio.h>
#include<string.h>

/**
    strcmp(string1, string2);
*/

void main(){
    char ip1[100], ip2[100];
    int ans;

    printf("\n Enter any String \t");
    gets(ip1);
    printf("\n Enter any String \t");
    gets(ip2);

    ans = strcmp(ip1, ip2);

    printf("\n Answer is %d", ans);
}
