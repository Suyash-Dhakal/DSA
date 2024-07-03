#include <stdio.h>
#include <stdlib.h>

void swap(int* num1, int* num2) {
    int temp = *num2;
    *num2 = *num1;
    *num1 = temp;
}

void bubble_sort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main() {
    int size;
    
    // Taking the size of the array as input
    printf("Enter the size of the array:\n");
    scanf("%d", &size);

    // Dynamically creating an array
    int *arr = (int*) malloc(size * sizeof(int));
    
    // Check if memory allocation was successful
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter the array contents:\n");

    // Filling the array with user inputs
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nThe Unsorted array is:\n");
    for (int j = 0; j < size; j++) {
        printf("%d ", arr[j]);
    }
   
    // Calling the bubble_sort() function
    bubble_sort(arr, size);

    printf("\nThe Sorted array is:\n");
    for (int k = 0; k < size; k++) {
        printf("%d ", arr[k]);
    }

    // Freeing the dynamically allocated memory
    free(arr);

    return 0;
}
