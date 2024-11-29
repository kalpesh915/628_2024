#include<stdio.h>

/**

*/

void toUpper(char[]);

void main(){
    char ip1[100];

    printf("\n Enter any string \t");
    gets(ip1);

    toUpper(ip1);
}

void toUpper(char tmp[100]){
    int count = 0;

    while(tmp[count] != '\0'){
        if(tmp[count] >= 97 && tmp[count] <= 122){
            tmp[count] -= 32;
        }
        count++;
    }

    printf("\n %s", tmp);
}
