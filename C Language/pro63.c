#include<stdio.h>
/**
    Bitwise xor
*/

void main(){
    int ip1 = 10, ip2 = 12, ans;

    /**
        ip1 = 10    1010
        ip2 = 12    1100
                ^   0110
    */

    ans = ip1 ^ ip2;
    printf("\n Answer is %d", ans);
}
