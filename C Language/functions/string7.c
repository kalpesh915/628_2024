#include<stdio.h>

/**
    find length of string with UDF

    012345678901
    Raj Makwana\0
*/

int strlength(char[]);

void main(){
    char ip1[100];
    int ans;

    printf("\n Enter any string \t");
    gets(ip1);

    ans = strlength(ip1);

    printf("\n Answer is %d", ans);
}

int strlength(char tmp[100]){
    int count = 0;

    while(tmp[count] != '\0'){
        count++;
    }

    return count;
}
