#include<stdio.h>

int checkChar(char);

void main(){
    char c;

    printf("\n Enter any character \t");
    c = getche();

    if(checkChar(c)){
        printf("\n True");
    }else{
        printf("\n False");
    }
}

int checkChar(char c){
    /// alphabet
    if((c >= 65 && c <= 90) || (c >= 97 && c <= 122)){
        return 1;
    }else{
        return 0;
    }
}
