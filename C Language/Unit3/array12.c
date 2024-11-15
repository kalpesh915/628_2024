#include<stdio.h>
#define size 10

/**
    check entered value is exist in array or not
*/
void main(){
    int ip[size], i, tmp, flag = 0;

    for(i=0; i<size; i++){
        printf("\n Enter value for ip[%d] \t", i);
        scanf("%d", &ip[i]);
    }

    printf("\n Enter value for search in array \t");
    scanf("%d", &tmp);

    for(i=0; i<size; i++){
        if(tmp == ip[i]){
            flag = 1;
            break;
        }
    }

    if(flag == 1){
        printf("\n Value %d found in array", tmp);
    }else{
        printf("\n Value %d not found in Array", tmp);
    }

}
