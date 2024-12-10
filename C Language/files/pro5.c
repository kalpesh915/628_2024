#include<stdio.h>

void main(){
    FILE *fp = fopen("data2.txt", "r");
    char op[100];

    while(!feof(fp)){ /// feof = file end of file
        fgets(op, 100, fp);
        printf("%s", op);
    }

    printf("\n Reading Completed \n");
    fclose(fp);
}
