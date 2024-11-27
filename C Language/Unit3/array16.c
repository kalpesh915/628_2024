/**
   Binary Search
   0    1   2   3   4   5   6   7   8   9
   12   23  56  65  78  87  89  92  95  99

   tmp = 92

   low = 0, high = 9

   while(low <= high){
        mid = low + high / 2

        if(ip[mid] == tmp){
            true found
        }

        if(ip[mid] < tmp){
            low = mid + 1;
        }else{
            high = mid - 1;
        }
   }
*/

#include<stdio.h>

#define size 10

void main(){
    int ip[size], i, high, low, mid, tmp, flag = 0;

    /// scan values
    printf("\n Enter Sorted Values \n");
    for(i=0; i<size; i++){
        printf("\n Enter value for ip[%d] \t", i);
        scanf("%d", &ip[i]);
    }

    printf("\n Enter value to find in array \t");
    scanf("%d", &tmp);

    low = 0;
    high = size;

    while(low <= high){
        mid = (low + high) / 2;

        if(ip[mid] == tmp){
            flag = 1;
            break;
        }else if(ip[mid] < tmp){
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }

    if(flag == 0){
        printf("\n %d not found in array ",tmp);
    }else{
        printf("\n %d found in array ",tmp);
    }

}
