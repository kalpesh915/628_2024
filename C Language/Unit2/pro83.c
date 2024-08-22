#include<stdio.h>

void main(){
    int ip1, ip2, ans;

    printf("\n Enter any value \t");
    scanf("%d", &ip1);
    printf("\n Enter any value \t");
    scanf("%d", &ip2);

    if(ip1 > ip2){
        ans = ip1;
    }else{
        ans = ip2;
    }

    printf("\n Maximum is %d", ans);
}
