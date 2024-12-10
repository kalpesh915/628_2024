#include<stdio.h>

void main(){
    char op[100];
    FILE *fp = fopen("data4.txt", "r");
    printf("Read Pointer at %d Location ", ftell(fp));
    fgets(op, 100, fp);
    printf("Read Pointer at %d Location ", ftell(fp));
    printf("\n File Writing Completed \n");
    fclose(fp);
}
