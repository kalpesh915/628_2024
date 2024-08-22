#include<stdio.h>

/// check entered character vowel or not AEIOU

void main(){
    char c;

    printf("\n Enter any Character \t");
    c = getche();

    if(c=='A' || c=='E' || c=='I' || c=='O' || c=='U' || c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
        printf("\n Vowel Detected");
    }else{
        printf("\n Consonant Detected");
    }
}
