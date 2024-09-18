#include<stdio.h>
/**
    Goto keyword
*/

void main(){
    int ip;

    question:
    printf("\n 5 * 5 = ? \t");
    scanf("%d", &ip);

    if(ip == 25){
        printf("\n Correct Answer");
    }else{
        goto question;
    }
}
