#include <stdio.h>

void findmax(int *n1,int *n2,int *r);

int main(){

    int x=10;
    int y=25;
    int result;

    findmax(&x,&y,&result);

    printf("Max value: %d\n",result);

    return 0;
}

void findmax(int *n1,int *n2,int *r){

    if(*n1>*n2){
    *r=*n1;
    }else{
    *r=*n2;
    }
}