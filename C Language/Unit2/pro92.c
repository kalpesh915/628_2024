#include<stdio.h>

/**
    calculate income tax
    income              tax
    000000-500000       0%
    500001-800000       10%
    800001-1000000      15%
    10000001-1500000    20%
    15000001 > NNNNN    30%

    Female tax payers less 3%
    Senior Citizen less 2%
*/

void main(){
    long int income;
    float tax;
    int age;
    char gender;

    printf("\n Enter income \t");
    scanf("%ld", &income);
    printf("\n Enter Age \t");
    scanf("%d", &age);
    printf("\n Select Gender (m | f) \t");
    gender = getche();

    printf("\n Income is %ld age is %d and gender is %c", income, age, gender);

    if(income >= 0 && income <= 500000){
        tax = 0;
    }else if(income > 500000 && income <= 800000){
        if(gender == 'f' || gender == 'F'){
            if(age > 60){
                tax = income * 0.05;
            }else{
                tax = income * 0.07;
            }
        }else if(gender == 'm' || gender == 'M'){
            if(age > 60){
                tax = income * 0.08;
            }else{
                tax = income * 0.10;
            }
        }else {
            printf("\n Invalid Gender Selected");
        }
    }else if(income > 800000 && income <= 1000000){
        if(gender == 'f' || gender == 'F'){
            if(age > 60){
                tax = income * 0.10;
            }else{
                tax = income * 0.12;
            }
        }else if(gender == 'm' || gender == 'M'){
            if(age > 60){
                tax = income * 0.13;
            }else{
                tax = income * 0.15;
            }
        }else {
            printf("\n Invalid Gender Selected");
        }
    }else if(income > 1000000 && income <= 1500000){
        if(gender == 'f' || gender == 'F'){
            if(age > 60){
                tax = income * 0.15;
            }else{
                tax = income * 0.17;
            }
        }else if(gender == 'm' || gender == 'M'){
            if(age > 60){
                tax = income * 0.18;
            }else{
                tax = income * 0.20;
            }
        }else {
            printf("\n Invalid Gender Selected");
        }
    }else if(income > 1500000 ){
        if(gender == 'f' || gender == 'F'){
            if(age > 60){
                tax = income * 0.25;
            }else{
                tax = income * 0.27;
            }
        }else if(gender == 'm' || gender == 'M'){
            if(age > 60){
                tax = income * 0.28;
            }else{
                tax = income * 0.30;
            }
        }else {
            printf("\n Invalid Gender Selected");
        }
    }

    printf("\n Payable Tax is %f", tax);
}

