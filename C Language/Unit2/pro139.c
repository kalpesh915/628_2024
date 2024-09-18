#include<stdio.h>
/**
    Prime number
*/

void main(){
    int ip, i, flag = 1;

    printf("\n Enter any number \t");
    scanf("%d", &ip);

    for(i=2; i<ip; i++){
        if(ip % i == 0){
            flag = 0;
        }
    }

    if(flag == 1){
        printf("\n Number is Prime");
    }else{
        printf("\n Try Another Number");
    }
}
