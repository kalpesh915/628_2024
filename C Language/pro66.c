#include<stdio.h>
/**
    Bitwise Not
*/

void main(){
    int ip1 = 10, ans;

    /**
        ip1 = 10    1010
                ~   0101
    */

    ans = ~ip1;
    printf("\n Answer is %d", ans);
}
