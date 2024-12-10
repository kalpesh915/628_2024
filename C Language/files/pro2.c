#include<stdio.h>

void main(){
    FILE *fp = fopen("data1.txt", "w");
    fputs("Welcome Mr. Raj to World of Files", fp);
    printf("\n Writing Completed \n");
    fclose(fp);
}
