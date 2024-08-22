#include<stdio.h>
#include<ctype.h>
/// check entered character vowel or not AEIOU

void main(){
    char c;

    printf("\n Enter any Character \t");
    c = getche();

    c = toupper(c);
    if(c=='A' || c=='E' || c=='I' || c=='O' || c=='U'){
        printf("\n Vowel Detected");
    }else{
        printf("\n Consonant Detected");
    }
}
