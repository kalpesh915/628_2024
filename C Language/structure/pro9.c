#include<stdio.h>

union box{
    /// double ans;
    int h, w, b;
};

void main(){
    union box b1;
    int ans = 1;
    printf("\n Size of Box Union is %d Bytes", sizeof(b1));

    printf("\n Enter Height of Box \t");
    scanf("%d", &b1.h);
    ans *= b1.h;
    printf("\n Enter Width of Box \t");
    scanf("%d", &b1.w);
    ans *= b1.w;
    printf("\n Enter Breadth of Box \t");
    scanf("%d", &b1.b);
    ans *= b1.b;

    printf("\n Volume of Box is %d", ans);
}
