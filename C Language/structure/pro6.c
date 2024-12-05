#include<stdio.h>

struct student{
    int roll;       /// 04
    char name[20];  /// 20
    float marks;    /// 04
};

void main(){
    struct student stdarray[3];
    int i;

    for(i=0; i<3; i++){
        printf("\n Enter Your Roll Number \t");
        scanf("%d", &stdarray[i].roll);
        fflush(stdin);
        printf("\n Enter Your Name \t");
        gets(stdarray[i].name);
        printf("\n Enter Marks \t");
        scanf("%f", &stdarray[i].marks);
    }

    for(i=0; i<3; i++){
        printf("\n Welcome %s your roll No. is %d and marks is %f", stdarray[i].name, stdarray[i].roll, stdarray[i].marks);
    }
}
