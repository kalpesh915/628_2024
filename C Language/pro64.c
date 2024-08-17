#include<stdio.h>
/**
    Bitwise Left Shift
*/

void main(){
    int ip1 = 10, ans;

    /**
        ip1 = 10    1010
        ip1 << 2
                  101000
    */

    ans = ip1 << 2;
    printf("\n Answer is %d", ans);
}
