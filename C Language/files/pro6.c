#include<stdio.h>

void main(){
    FILE *fp = fopen("data2.txt", "r");
    char op;

    while(!feof(fp)){ /// feof = file end of file
        op = fgetc(fp);
        printf(" %c", op);
    }

    printf("\n Reading Completed \n");
    fclose(fp);
}
