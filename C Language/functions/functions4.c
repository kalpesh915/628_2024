/**
    UDF 3 : No Parameters With Return value
*/

#include<stdio.h>

float pi(); /// declaration

void main(){
    float ans;
    ans = pi();
    printf("\n Answer is %f", ans);
    printf("\n Answer is %f", pi());
}

/// Definition
float pi(){
    return 3.14;
}
