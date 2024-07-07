#include <stdio.h>
#include <stdlib.h>

void merge(int arr[],int l,int m, int r){
int i,j,k;
int n1=m-l+1;
int n2=r-m;
//create temporary arrays
int L[n1],R[n2];
 // Copy data to temp arrays L[] and R[]
  for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
  for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

   // Maintain current index of sub-arrays and main array

    i = 0;
    j = 0;
    k = l;

        // Until we reach either end of either L or M, pick larger among
    // elements L and M and place them in the correct position at A[p..r]
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
     // When we run out of elements in either L or M,
    // pick up the remaining elements and put in A[p..r]
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}



void merge_sort(int arr[],int l, int r){
if(l<r){
    int m=(l+r)/2;
    merge_sort(arr,l,m);
    merge_sort(arr,m+1,r);
    merge(arr,l,m,r);

}
}

int main()
{

int arr[5]={5,4,3,2,1};
merge_sort(arr,0,4);
for(int i=0;i<5;i++){
    printf("%d ",arr[i]);
}

return 0;
}