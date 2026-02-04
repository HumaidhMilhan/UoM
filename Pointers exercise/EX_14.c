#include <stdio.h>

void multiply(int *a,int *b);

int main(){

    int x=5;
    int y=4;

    printf("Before multiply: %d %d\n",x,y);

    multiply(&x,&y);

    printf("After multiply: %d %d\n",x,y);

    return 0;
}

void multiply(int *a,int *b){

    *a=*a * *b;

}