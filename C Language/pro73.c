#include<stdio.h>

/**
    type casting
*/

void main(){
    int ip1;
    float ip2, ans;

    printf("\n Enter value for ip1 \t");
    scanf("%d", &ip1);
    printf("\n Enter value for ip2 \t");
    scanf("%f", &ip2);

    /// ans = (int) (ip1 / ip2);
    ans = (ip1 + ip2);

    printf("\n answer is %d", (int)ans);
    printf("\n answer is %f", ans);
}
