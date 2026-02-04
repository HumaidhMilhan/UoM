#include <stdio.h>

void incrementScores(float *startPtr, int limit);

int main()
{
    int subjectCount;
    float gradeList[30];
    float *iter = gradeList;

    printf("Enter number of subjects: ");
    scanf("%d", &subjectCount);

    printf("Enter marks:\n");
    for(int k = 0; k < subjectCount; k++)
    {
        scanf("%f", iter);
        iter++;
    }

    incrementScores(gradeList, subjectCount);

    printf("Updated marks:\n");
    
    iter = gradeList;
    for(int k = 0; k < subjectCount; k++)
    {
        printf("%.2f ", *iter);
        iter++;
    }

    return 0;
}

void incrementScores(float *startPtr, int limit)
{
    float *endPtr = startPtr + limit;

    while(startPtr < endPtr)
    {
        *startPtr *= 1.05;
        startPtr++;
    }
}