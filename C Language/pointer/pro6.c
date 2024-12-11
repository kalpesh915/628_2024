#include<stdio.h>

void  main(){
    int ip1 = 10, ip2 = 20, *ptr, **pptr;

    ptr = &ip1;
    pptr = &ptr;

    printf("\n **pptr is %d", **pptr);

    ptr = &ip2;
    printf("\n **pptr is %d", **pptr);
}

