#include <stdio.h>
#include <stdlib.h>

void swap(int* ptr1, int* ptr2){
int temp=*ptr2;
*ptr2=*ptr1;
*ptr1=temp;
}

void selection_sort(int arr[],int size){
    int i,j;
    for(i=0;i<size-1;i++){
int min_index=i;
        for(j=i+1;j<size;j++){
            
            if(arr[j]<arr[min_index]){
                min_index=j;
            }
        }
        swap(&arr[min_index],&arr[i]);
    }
}
int main(){
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

        // Calling the selection_sort() function
selection_sort(arr,size);

    printf("\nThe Sorted array is:\n");
    for (int k = 0; k < size; k++) {
        printf("%d ", arr[k]);
    }

    // Freeing the dynamically allocated memory
    free(arr);
return 0;
}