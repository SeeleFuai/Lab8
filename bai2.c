#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void selectSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            printf("\nComparing arr[%d]=%d and arr[%d]=%d\n", minIndex, arr[minIndex], j, arr[j]);
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            printf("Swapping arr[%d]=%d and arr[%d]=%d\n", i, arr[i], minIndex, arr[minIndex]);
            swap(&arr[i], &arr[minIndex]);
            printArray(arr, n);
        } else {
            printf("No swap needed\n");
            printArray(arr, n);
        }
    }
}

int main() {
    int A[] = {7, 9, 10, -4, 5, 8, 2, 1};
    int n = sizeof(A) / sizeof(A[0]);
    selectSort(A, n);

    printf("Sorted array:\n");
    printArray(A, n);
    return 0;
}