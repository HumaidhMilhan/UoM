#include <stdio.h>
#include <string.h>

int main() {
    char strBuffer[150];
    char *cursor = strBuffer;
    int validChars = 0;

    printf("Input your full name: ");
    fgets(strBuffer, sizeof(strBuffer), stdin);

    char *newlinePtr = strchr(strBuffer, '\n');
    if (newlinePtr) {
        *newlinePtr = '\0';
    }

    while (*cursor != '\0') {
        if (*cursor != ' ') {
            validChars++;
        }
        cursor++;
    }

    printf("\nNumber of characters (excluding spaces): %d\n", validChars);
    printf("Characters at even positions: ");

    cursor = strBuffer;
    int offset = 0;

    while (*(cursor + offset) != '\0') {
        printf("%c", *(cursor + offset));
        
        if (*(cursor + offset + 1) == '\0') break;
        
        offset += 2;
    }

    printf("\n");
    return 0;
}