#include<stdio.h>

/**

*/

void toLower(char[]);

void main(){
    char ip1[100];

    printf("\n Enter any string \t");
    gets(ip1);

    toLower(ip1);
}

void toLower(char tmp[100]){
    int count = 0;

    while(tmp[count] != '\0'){
        if(tmp[count] >= 65 && tmp[count] <= 90){
            tmp[count] += 32;
        }
        count++;
    }

    printf("\n %s", tmp);
}
