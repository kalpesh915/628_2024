#include<stdio.h>

void main(){
    FILE *fp = fopen("data1.txt", "w");
    char c;
    printf("\n Write Data in File Press Z for Exit \n");

    while(c != 'Z'){
        c = getche();
        if(c == 'Z'){
            break;
        }
        fputc(c, fp);
    }

    printf("\n Writing Completed \n");
    fclose(fp);
}
