#include <stdio.h>

int main()
{
    int userInput, holder;
    int accumulator = 0;
    int numBuffer[30];
    int *trackPtr = numBuffer;
    int digitLen = 0;

    printf("Enter your index number: ");
    scanf("%d", &userInput);

    holder = userInput;

    while (holder > 0)
    {
        *trackPtr = holder % 10;
        holder /= 10;
        trackPtr++;
        digitLen++;
    }

    printf("Digits are:\n");

    for (int k = 0; k < digitLen; k++)
    {
        trackPtr--;
        printf("%d ", *trackPtr);
        accumulator += *trackPtr;
    }

    printf("\nSum of digits: %d\n", accumulator);

    return 0;
}