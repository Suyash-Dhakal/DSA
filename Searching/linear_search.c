#include <stdio.h>
#include <stdlib.h>

// Function to perform linear search in an array
int linear_search(int arr[], int key, int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i;  // Return the index if the key is found
        }
    }
    return -1;  // Return -1 if the key is not found
}

int main() {
    int size, key;
    
    // Taking the size of the array as input
    printf("Enter the size of the array:\n");
    scanf("%d", &size);

    // Dynamically creating an array
    int *arr = (int*) malloc(size * sizeof(int));
    printf("Enter the array contents:\n");

    // Filling the array with user inputs
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Taking the key value to be searched in the array
    printf("Enter the key value:\n");
    scanf("%d", &key);

    // Calling the linear_search() function
    int index = linear_search(arr, key, size);

    if (index != -1) {
        printf("Key value: %d found at array index: %d\n", key, index);
    } else {
        printf("Key value: %d not found in the given array\n", key);
    }

    // Freeing the dynamically allocated memory
    free(arr);

    return 0;
}
