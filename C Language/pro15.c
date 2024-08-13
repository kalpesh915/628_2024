#include<stdio.h>

#define cube x*x*x

void main(){
    int x;

    printf("\n Enter any value for find cube \t");
    scanf("%d", &x);
    printf("\n Cube if %d is %d", x, cube);
}
