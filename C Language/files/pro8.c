#include<stdio.h>

void main(){
    FILE *fp = fopen("data4.txt", "a");
    fputs("Welcome to world of files with C \n", fp);
    printf("\n File Writing Completed \n");
    fclose(fp);
}
