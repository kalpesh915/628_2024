#include<stdio.h>
/**
    Bitwise Right Shift
*/

void main(){
    int ip1 = 10, ans;

    /**
        ip1 = 10    1010
        ip1 >> 2
                    0010
    */

    ans = ip1 >> 2;
    printf("\n Answer is %d", ans);
}
