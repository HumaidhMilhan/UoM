#include <stdio.h>

void getinput(int values[], int size);
int Avg(int values[], int size);

int main() {
    int n;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int values[n];

    getinput(values, n);          
    int avg = Avg(values, n);     

    printf("The average of the array is %d\n", avg);

    return 0;
}

void getinput(int values[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Enter the #%d value: ", i + 1);
        scanf("%d", &values[i]);
    }
}

int Avg(int values[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += values[i];
    }
    return sum / size;
}
