#include<stdio.h>

void main(){
    FILE *fp = fopen("data.txt", "r");
    char data[100];
    fgets(data, 100, fp);
    printf("\n Data From File is %s", data);
    fclose(fp);
}
