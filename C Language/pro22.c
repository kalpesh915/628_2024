#include<stdio.h>

/**
    swap 2 numbers without use of third variable
*/

void main(){
    int ip1, ip2;

    printf("\n Enter value for ip1 \t");
    scanf("%d", &ip1);
    printf("\n Enter value for ip2 \t");
    scanf("%d", &ip2);

    printf("\n before swap value of ip1 is %d and ip2 is %d", ip1, ip2);

                                    /// ip1     ip2
                                    /// 11      22
    ip1 = ip1 + ip2;                /// 33      22
    ip2 = ip1 - ip2;                /// 33      11
    ip1 = ip1 - ip2;                /// 22      11

    printf("\n After swap value of ip1 is %d and ip2 is %d", ip1, ip2);
}
