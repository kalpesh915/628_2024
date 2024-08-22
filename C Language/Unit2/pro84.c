#include<stdio.h>

/// check entered character vowel or not AEIOU

void main(){
    char c;

    printf("\n Enter any Character \t");
    c = getche();

    if(c=='A' || c=='E' || c=='I' || c=='O' || c=='U'){
        printf("\n Vowel Detected");
    }else{
        printf("\n Consonant Detected");
    }
}
