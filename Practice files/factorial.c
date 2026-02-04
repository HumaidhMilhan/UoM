#include <stdio.h>

int factorial(int num);

int main(){

    int num;
    int factor;

    printf("Enter a number for factorial: ");
    scanf("%d", &num);

    factor= factorial(num);

    printf("The factorial of %d is %d", num, factor);

    return 0;
}

int factorial(int num){

    int factor=1;

    for(int i = num; i>=1; i--){
        factor *= i;
    }

    return factor;
}