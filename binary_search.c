#include <stdio.h>
#include <stdlib.h>

// Function to perform binary search in a sorted array
int binary_search(int arr[], int key, int size) {
    int left = 0, mid, right = size - 1;

    // Perform binary search
    while (left <= right) {
        mid = (left + right) / 2;

        if (key == arr[mid]) {
            return mid;  // Return the index if key is found
        } else if (key < arr[mid]) {
            right = mid - 1;  // Update the right boundary
        } else {
            left = mid + 1;   // Update the left boundary
        }
    }

    return -1;  // Return -1 if key is not found
}

int main() {
    int size, key;

    // Taking the size of the array as input
    printf("Enter the size of the array:\n");
    scanf("%d", &size);

    // Dynamically creating an array
    int *arr = (int*) malloc(size * sizeof(int));

    // Binary search requires the array to be sorted in ascending order
    printf("Enter the array contents (sorted in ascending order):\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Taking the key value to be searched in the array
    printf("Enter the key value:\n");
    scanf("%d", &key);

    // Calling the binary_search() function
    int index = binary_search(arr, key, size);

    if (index != -1) {
        printf("Key value: %d found at array index: %d\n", key, index);
    } else {
        printf("Key value: %d not found in the given array\n", key);
    }

    // Freeing the dynamically allocated memory
    free(arr);

    return 0;
}
