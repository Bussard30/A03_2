#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int array[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (array[j] > array[j + 1])
                swap(&array[j], &array[j + 1]);
}

void printArray(int array[], int size) {
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", array[i]);
    printf(";");
}

int main() {
    printf("Bubble sorting unsorted integer array...\n");
    int array[] = {322, -1356, 132, 87654, -4672};
    int size = sizeof(array) / sizeof(array[0]);
    printf("Unsorted array : ");
    printArray(array, size);
    printf("\n");
    bubbleSort(array, size);
    printf("Result: ");
    printArray(array, size);
    return 0;
}
