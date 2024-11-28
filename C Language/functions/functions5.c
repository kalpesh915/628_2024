/**
    UDF 4 : With Parameters With Return value
*/

#include<stdio.h>

float div(int, int); /// declaration

void main(){
    int ip1, ip2;
    float ans;

    printf("\n Enter value for ip1 \t");
    scanf("%d", &ip1);
    printf("\n Enter value for ip2 \t");
    scanf("%d", &ip2);

    ans = div(ip1, ip2);
    printf("\n Answer is %f", ans);
}

/// Definition
float div(int ip1, int ip2){
    ///return ip1 / ip2;
    float ans;
    ans = ip1 / ip2;
    return ans;
}
