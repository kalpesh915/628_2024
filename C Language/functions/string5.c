#include<stdio.h>
#include<string.h>

/**
    check entered string is palindrome or not

    nayan
    >> <<
*/

void main(){
    char ip1[100], ip2[100];
    int ans;

    printf("\n Enter any string \t");
    gets(ip1);

    strcpy(ip2, ip1);
    strrev(ip2);
    ans = strcmp(ip1, ip2);

    if(ans == 0){
        printf("\n String is Palindrome");
    }else{
        printf("\n Try Another String");
    }

}
