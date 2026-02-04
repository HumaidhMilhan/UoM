#include <stdio.h> 

int main() {

    printf("Printing with the 0 (zero) flag fills in leading zeros\n"); 
    printf(" Compare the output with the source code\n"); 
    printf("   \n\n"); 
    printf("%+09d\n", 762); 
    printf("%09d", 762); 
    printf("\n"); 

    return 0; 
}