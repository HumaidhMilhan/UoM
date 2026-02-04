#include <stdio.h>

int main() {
    
    int n,largenum=0;

    printf("Enter how many values would you like to compare: ");
    scanf("%d", &n);

    int values[n];

    for(int i=1; i<=n ; i++){
        printf("Enter the #%d value: ", i);
        scanf("%d", &values[i]);
    }

    largenum=values[0];
    for(int i=n; i >= 1; i--){
        if(values[i]>largenum)
            largenum = values[i];
    }

    printf("The largest value of the array is %d", largenum);
    
    return 0;
}