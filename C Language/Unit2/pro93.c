#include<stdio.h>

/**
    Switch case
*/

void main(){
    int ip;

    printf("\n Enter any value for ip \t");
    scanf("%d", &ip);

    switch(ip){
        case 1:{
            printf("\n One");
            //break;
        }
        case 2:{
            printf("\n Two");
            //break;
        }
        case 3:{
            printf("\n Three");
            //break;
        }
        case 4:{
            printf("\n Four");
            //break;
        }
        case 5:{
            printf("\n Five");
            //break;
        }
        default:{
            printf("\n Out of Range");
            break;
        }
    }
}

