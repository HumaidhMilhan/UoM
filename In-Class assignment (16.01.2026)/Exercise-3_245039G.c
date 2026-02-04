#include <stdio.h>

int main() {
    int dateArr[4];
    int *head = dateArr;
    int *nav;

    printf("Input your birth year (4 digits): ");
    
    for (nav = head; nav < head + 4; nav++) {
        scanf("%1d", nav);
    }

    printf("\nDigits forward: ");
    
    nav = head;
    while(nav < head + 4) {
        printf("%d ", *nav);
        nav++;
    }

    printf("\n");
    printf("Digits backward: ");
    
    nav = head + 3;
    while(nav >= head) {
        printf("%d ", *nav);
        nav--;
    }

    printf("\n");
    return 0;
}