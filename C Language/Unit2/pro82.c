#include<stdio.h>

void main(){
    int ip1, ip2;

    printf("\n Enter any value \t");
    scanf("%d", &ip1);
    printf("\n Enter any value \t");
    scanf("%d", &ip2);

    if(ip1 == ip2){
        printf("\n both values are same");
    }else{
        printf("\n both values not are same");
    }
}
