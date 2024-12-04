#include<stdio.h>
#include<ctype.h>

/**
    count how many alphabets, upper, lower, digits, special char,
    word, total length
*/

void main(){
    char ip[100], c;
    int count = 0, alphacount = 0, digitcount = 0, uppercount = 0,
    lowercount = 0, specialchar = 0, words = 1;


    printf("\n Enter any String \t");
    gets(ip);

    while(ip[count] != '\0'){
        c = ip[count];

        if(isalpha(c)){
            alphacount++;

            if(isupper(c)){
                uppercount++;
            }else{
                lowercount++;
            }
        }else if(isdigit(c)){
            digitcount++;
        }else if(ispunct(c)){
            specialchar++;
        }else if(isspace(c)){
            words++;
        }

        count++;
    }

    printf("\n Total Length is %d", count);
    printf("\n Total Alphabets is %d", alphacount);
    printf("\n Total Uppercase is %d", uppercount);
    printf("\n Total Lowercase is %d", lowercount);
    printf("\n Total Special Characters is %d", specialchar);
    printf("\n Total Digits is %d", digitcount);
    printf("\n Total Words is %d", words);
}
