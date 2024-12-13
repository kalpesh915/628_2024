#include<stdio.h>

/**
    find sum of digits with recursion

    12334531 = 22
*/

int sum(int);

void main(){
    int ip, ans;

    printf("\n Enter any number \t");
    scanf("%d", &ip);

    ans = sum(ip);
    printf("\n Sum is %d", ans);
}

int sum(int ip){
    if(ip > 0){
        return ip % 10 + sum(ip / 10);
    }else{
        return 0;
    }
}
