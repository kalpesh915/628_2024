#include<stdio.h>

/// leap year

void main(){
    int ip1;

    printf("\n Enter any year \t");
    scanf("%d", &ip1);

    if(ip1 % 4 == 0){
        printf("\n Leap Year ");
    }else{
        printf("\n Non Leap Year ");
    }
}
