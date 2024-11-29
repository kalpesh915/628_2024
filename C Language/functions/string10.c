#include<stdio.h>

/**
    Compare strings
*/

int compare(char[], char[]);
int length(char[]);

void main(){
    char ip1[100], ip2[100];
    int ans;

    printf("\n Enter any string \t");
    gets(ip1);
    printf("\n Enter any string \t");
    gets(ip2);
    ans = compare(ip1, ip2);

    if(ans == 0){
        printf("\n Both Strings are same");
    }else if(ans > 0){
        printf("\n First string have bigger ASCII value");
    }else{
        printf("\n Second string have bigger ASCII value");
    }
}

int compare(char ip1[100], char ip2[100]){
    int count = 0;

    if(length(ip1) == length(ip2)){
        while(ip1[count] != '\0' || ip2[count] != '\0'){
            if(ip1[count] != ip2[count]){
                /*if(ip1[count] > ip2[count]){
                    return 1;
                }else{
                    return -1;
                }*/

                return ip1[count] > ip2[count] ? 1 : -1;
            }
            count++;
        }
        return 0;
    }
    else{
        return -1;
    }

}

int length(char ip[]){
    int count = 0;

    while(ip[count] != '\0'){
        count++;
    }

    return count;
}
