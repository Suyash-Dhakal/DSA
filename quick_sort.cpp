#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Sorter{
public:
int partition(vector<int>& arr,int l,int r){
int i=l;
int j=r;
int p=arr[i];
while(i<j){
while(arr[i]<=p)
i++;
while(arr[j]>p)
j--;
if(i<j){
std::swap(arr[i], arr[j]);
}
}
arr[l]=arr[j];
arr[j]=p;
return j;
}

void quick_sort(vector<int>& arr,int l, int r){
if(l<r){
    int p=partition(arr,l,r); //here p is the pivot element
    quick_sort(arr,l,p-1);
    quick_sort(arr,p+1,r);
}

}
};

int main(){

int size;
cout<<"Enter the size of array:"<<endl;
cin>>size;
vector<int> arr(size);
cout << "Enter the array contents:" << endl;
for(int i=0;i<size;i++){
    cin>>arr[i];
}

cout << "The Unsorted Array is:" << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    Sorter sortObj;

    sortObj.quick_sort(arr, 0, size - 1);

    cout << "The Sorted array is:" << endl;
    for (int k = 0; k < size; k++) {
        cout << arr[k] << " ";
    }
    cout << endl;

return 0;
}