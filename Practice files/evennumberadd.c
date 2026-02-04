#include <stdio.h>

int main(){

    int n,sum=0;
    
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i=n; i>=1; i--){
        if(i%2 == 0)
            sum += i;
    }

    printf("The sum of even numbers in %d is %d\n", n,sum);
    return 0;
}