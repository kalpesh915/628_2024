#include<stdio.h>

struct{
    int roll;       /// 04
    char name[20];  /// 20
    float marks;    /// 04
                    /// 28
}std1;

void main(){
    std1.roll = 1;
    strcpy(std1.name, "Krishn Butani");
    std1.marks = 98.90;

    printf("\n Size of Structure is %d Bytes", sizeof(std1));


    printf("\n Welcome %s your roll No. is %d and marks is %f", std1.name, std1.roll, std1.marks);
}
