#include<stdio.h>
/**
    Ternary operators

    result = (condition ? True Part : False Part);
*/

void main(){
    int ip1, ip2, ip3, ans;

    printf("\n Enter value for ip1 \t");
    scanf("%d", &ip1);
    printf("\n Enter value for ip2 \t");
    scanf("%d", &ip2);
    printf("\n Enter value for ip3 \t");
    scanf("%d", &ip3);

    /**
        ip1     120
        ip2     76
        ip3     860
    */

    ans = ip1 > ip2 ? (ip1 > ip3 ? ip1 : ip3) : (ip2 > ip3 ? ip2 : ip3);

    printf("\n Maximum is %d", ans);
}
