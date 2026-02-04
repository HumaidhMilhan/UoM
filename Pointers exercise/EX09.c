#include <stdio.h>

void modify(int arr[]);

int main(){

    int arr[5];
    for (int i = 0; i <=4; i++){
        printf("Please enter a numerical value\n");
        scanf("%d", &arr[i]);
    }

    modify(arr);

    printf("Modified array in main:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

void modify(int arr[]){

    for (int i= 0; i <= 4; i++){
        arr[i] = arr[i] * 2;
    }

}