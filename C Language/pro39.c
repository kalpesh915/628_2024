#include<stdio.h>

void main(){
    int c;

    printf("\n Size of Char Variable is %d", sizeof(c));

    printf("\n Enter any Character \t");
    c = getche();

    printf("\n Value of ip1 is %c ASCII is %d", c, c);
    /// printf("\n Address of c is %d", &c);
    /// printf("\n Address of c is %x", &c);
}
