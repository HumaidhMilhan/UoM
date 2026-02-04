#include <stdio.h>

void MaxValue(int *p, int *q);

int main(){

    int arr[] = {123,8,3,45,5};

    int *p = arr;
    int *q = arr + 1;

    MaxValue(p, q);
        
    
    return 0;
}

void MaxValue(int *p, int *q){
    int max = *p;
    for (int i = 0; i <= 4; i++){
        if (*p > max){
            max = *p;
        } else if(*q > max){
            max = *q;
        }
        p++;
        q++;
    }
    printf("%d is maximum value in the array", max);
}