#include <stdio.h>

void adjustScores(int *dataPtr, int size, int val);

int main()
{
    int studentID, count;
    int gradeSheet[25];
    int *tracker = gradeSheet;
    int modifier;

    printf("Enter index number: ");
    scanf("%d", &studentID);

    modifier = studentID % 10;

    printf("Enter number of subjects: ");
    scanf("%d", &count);

    printf("Enter marks:\n");
    int received = 0;
    while(received < count)
    {
        scanf("%d", tracker);
        tracker++;
        received++;
    }

    adjustScores(gradeSheet, count, modifier);

    printf("Updated marks:\n");
    
    tracker = gradeSheet;
    for(int k = 0; k < count; k++)
    {
        printf("%d ", *(tracker + k));
    }
    
    return 0;
}

void adjustScores(int *dataPtr, int size, int val)
{
    int *limit = dataPtr + size;

    while(dataPtr < limit)
    {
        *dataPtr += val;
        dataPtr++;
    }
}