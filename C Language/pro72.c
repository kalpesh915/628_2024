#include<stdio.h>

/**
    type casting
*/

void main(){
    int ip1, ip2;
    float ans;

    printf("\n Enter value for ip1 \t");
    scanf("%d", &ip1);
    printf("\n Enter value for ip2 \t");
    scanf("%d", &ip2);

    /// ans = (int) (ip1 / ip2);
    ans = (float) ip1 / ip2;

    printf("\n answer is %d", (int)ans);
    ///printf("\n answer is %d", ans);
    printf("\n answer is %f", ans);
}
