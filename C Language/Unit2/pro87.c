#include<stdio.h>
#include<ctype.h>
/// check entered character vowel or not AEIOU

void main(){
    char c;
    int uw = 0, lw = 0;
    printf("\n Enter any Character \t");
    c = getche();

    uw = (c=='A' || c=='E' || c=='I' || c=='O' || c=='U');
    lw = (c=='a' || c=='e' || c=='i' || c=='o' || c=='u');

    if(uw || lw){
        printf("\n Vowel Detected");
    }else{
        printf("\n Consonant Detected");
    }
}

