#include<stdio.h>

void  main(){
    int ip1[] = {11, 22, 33, 44, 55, 66, 77, 88, 99, 111}, *ptr;
    ptr = &ip1;

    printf("\n value of *ptr is %d and address is %d", *ptr, ptr);
    ptr++;
    printf("\n value of *ptr is %d and address is %d", *ptr, ptr);
    ptr++;
    printf("\n value of *ptr is %d and address is %d", *ptr, ptr);
    ptr -= 2;
    printf("\n value of *ptr is %d and address is %d", *ptr, ptr);
}
