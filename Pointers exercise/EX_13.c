#include <stdio.h>

void swap(int *n1,int *n2);

int main(){

    int x=5;
    int y=10;

    printf("Before swap: %d %d\n",x,y);

    swap(&x,&y);

    printf("After swap: %d %d\n",x,y);

    return 0;
}

void swap(int *n1,int *n2){

    int temp;
    temp=*n1;
    *n1=*n2;
    *n2=temp;

}