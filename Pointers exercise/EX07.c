#include <stdio.h>

void printarr(int arr[], int i);

int main(){

    int arr[] = {1,2,3,4,5};


    for (int i = 0; i <= 4; i++){
        printarr(arr, i);
    }

    return 0;
}

void printarr(int arr[], int i){
    printf("%d\n", arr[i]);
}