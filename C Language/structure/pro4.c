#include<stdio.h>

struct student{
    int roll;       /// 04
    char name[20];  /// 20
    float marks;    /// 04
};

void main(){
    struct student std1, std2;

    ///printf("\n Size of Structure is %d Bytes", sizeof(std1));
    printf("\n Enter Your Roll Number \t");
    scanf("%d", &std1.roll);
    fflush(stdin);
    printf("\n Enter Your Name \t");
    gets(std1.name);
    printf("\n Enter Marks \t");
    scanf("%f", &std1.marks);


    printf("\n Welcome %s your roll No. is %d and marks is %f", std1.name, std1.roll, std1.marks);
}
