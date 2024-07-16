#include <stdio.h>
#define max 5

void swap(int* ptr1, int* ptr2){
int temp=*ptr2;
*ptr2=*ptr1;
*ptr1=temp;
}

int partition(int arr[],int l,int r){
int pivot=arr[l];
int i=l;
int j=r;
while(i<j)
{
while(arr[i]<=pivot)
i++;
while(arr[j]>pivot)
j--;
if(i<j){
    swap(&arr[i],&arr[j]);
}
}
swap(&arr[l],&arr[j]);
return j;
}

void quick_sort(int arr[],int l,int r){
if(l<r){
int p=partition(arr,l,r); // here p is the pivot
quick_sort(arr,l,p-1);
quick_sort(arr,p+1,r);
}

}

int main(){
int arr[max]={5,4,3,2,1};
printf("\nBefore Sorting\n");
for(int i=0;i<max;i++)
printf("%d ",arr[i]);

// quick_sort(arr,0,4);

// printf("\nAfter Sorting\n");
// for(int i=0;i<max;i++)
// printf("%d ",arr[i]);
return 0;
}