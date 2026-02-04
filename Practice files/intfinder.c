#include <stdio.h>

int main(){

    int num=0;

    printf("Enter a number you like: ");
    scanf("%d", &num);

    if(num<0){
        printf("This is a negative Number\n");
    } 
    else if (num == 0){
        printf("The number is Zero(0)\n");
    }
    else{
        printf("This is a positive number\n");
    }
    

    return 0;
}