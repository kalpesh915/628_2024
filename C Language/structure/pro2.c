#include<stdio.h>

struct student{
    int roll;       /// 04
    char name[20];  /// 20
    float marks;    /// 04
                    /// 28
};

void main(){
    struct student std1 = {1, "Vrajesh Mer", 99.87};
    printf("\n Size of Structure is %d Bytes", sizeof(std1));


    printf("\n Welcome %s your roll No. is %d and marks is %f", std1.name, std1.roll, std1.marks);
}
