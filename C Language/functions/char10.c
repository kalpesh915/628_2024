#include<stdio.h>
#include<ctype.h>

void main(){
    char c;

    printf("\n Enter any Character \t");
    c = getche();

    printf("\n Character in Lower is %c", tolower(c));
    printf("\n Character in Upper is %c", toupper(c));
}
