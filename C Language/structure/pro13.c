#include<stdio.h>

enum boolean {
    false,
    true
};

void main(){
    enum boolean status = false;

    if(status){
        printf("\n True");
    }else{
        printf("\n False");
    }
}
