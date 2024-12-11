#include<stdio.h>

void  main(){
    int ip1 = 10, *ptr;

    printf("\n value of ip1 is %d and address of ip1 is %d", ip1, &ip1);
    ptr = &ip1; /// address op ip1 to ptr
    printf("\n value of ptr is %d and address of ptr is %d", ptr, &ptr);

    printf("\n *ptr is %d", *ptr);

    *ptr = 100;
    printf("\n value of ip1 is %d and address of ip1 is %d", ip1, &ip1);
}
