#include <stdio.h>

void isEven(int *p);

int main(){

    int arr[] = {1,2,3,4,5};

    int *p = arr;

    for (int i = 0; i <= 4; i++){
        isEven(p);
        p++;
    }
    
    return 0;
}

void isEven(int *p){
    if (*p%2 == 0){
        printf("%d is an even number\n", *p);
    } else {
        printf("%d is an odd number\n", *p);
    }
}