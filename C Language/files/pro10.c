#include<stdio.h>

void main(){
    char op[100];
    FILE *fp = fopen("data4.txt", "r");
    printf("Read Pointer at %d Location ", ftell(fp));
    fseek(fp, 100, 0); /// move pointer
    /**
        0   =   beginning
        1   =   current
        2   =   end
    */
    printf("Read Pointer at %d Location ", ftell(fp));
    printf("\n File Writing Completed \n");
    fclose(fp);
}
