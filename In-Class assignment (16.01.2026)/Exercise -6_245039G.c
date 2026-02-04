#include <stdio.h>

int* getLowestScore(int *dataset, int capacity);

int main()
{
    int totalSubjects;
    
    printf("Enter number of subjects: ");
    scanf("%d", &totalSubjects);

    int scores[totalSubjects];
    int *cursor = scores;

    printf("Enter marks:\n");
    for (int k = 0; k < totalSubjects; k++)
    {
        scanf("%d", cursor);
        cursor++;
    }

    int *lowestLoc = getLowestScore(scores, totalSubjects);

    printf("\nMinimum mark: %d", *lowestLoc);
    printf("\nPosition (Index): %ld", lowestLoc - scores);

    return 0;
}

int* getLowestScore(int *dataset, int capacity)
{
    int *lowest = dataset;
    int *current = dataset + 1;
    int *limit = dataset + capacity;

    while (current < limit)
    {
        if (*current < *lowest)
        {
            lowest = current;
        }
        current++;
    }
    return lowest;
}