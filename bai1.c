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

void interchangeSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            printf("\nComparing arr[%d]=%d and arr[%d]=%d\n", i, arr[i], j, arr[j]);
            if (arr[i] > arr[j]) {
                printf("Swapping arr[%d]=%d and arr[%d]=%d\n", i, arr[i], j, arr[j]);
                swap(&arr[i], &arr[j]);
                printArray(arr, n);
            }
            else 
            {
                printf("No swap needed\n");
                printArray(arr, n);
            }
        }
    }
}





int main() {
    int A[] = {7, 9, 10, -4, 5, 8, 2, 1};
    int n = sizeof(A) / sizeof(A[0]);
    interchangeSort(A, n);

    printf("Sorted array:\n");
    printArray(A, n);
    return 0;
}
