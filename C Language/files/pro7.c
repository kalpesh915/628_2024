#include<stdio.h>

void main(){
    FILE *fp = fopen("data3.txt", "w");
    fputs("Welcome to world of files with C \n", fp);
    printf("\n File Writing Completed \n");
    fclose(fp);
}
