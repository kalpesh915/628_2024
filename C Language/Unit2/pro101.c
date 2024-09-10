#include<stdio.h>

/**
    count how man digits in entered number.
    2422334 = 7
*/

void main(){
    int ip, ans = 0;

    printf("\n Enter any number \t");
    scanf("%d", &ip);

    while(ip > 0){
        ans++;
        ip = ip / 10;
    }

    printf("\n Answer is %d", ans);
}
