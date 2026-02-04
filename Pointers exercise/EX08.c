#include <stdio.h>

void sum(int arr[]);

int main(){

    int arr[5];
    for (int i = 0; i <=4; i++){
        printf("Please enter a numerical value\n");
        scanf("%d", &arr[i]);
    }

    sum(arr);

    return 0;
}

void sum(int arr[]){

    int i;
    int sum;

    for (i= 0; i <= 4; i++){
        sum += arr[i];
    }

    printf("%d is the total sum of the array", sum);

}