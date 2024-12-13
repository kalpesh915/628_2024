#include<stdio.h>

/**
    find sum of numbers with recursion
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
        return ip + sum(ip - 1);
    }else{
        return 0;
    }
}
