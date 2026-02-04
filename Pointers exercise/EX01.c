#include <stdio.h>

void printarr(int *p);

int main(){

    int arr[] = {1,2,3,4,5};

    int *p = arr;

    for (int i = 0; i <= 4; i++){
        printarr(p);
        p++;
    }

    return 0;
}

void printarr(int *p){
    printf("%d\n", *p);
}