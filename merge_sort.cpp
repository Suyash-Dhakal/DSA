#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Sorter{
public:
void merge(vector<int>&arr,int l,int m,int r){
int i=l,j=m+1,k=l;
//i starting index for left sub array
//j starting index for right sub array
//k starting index for temporary merged sorted array 
int temp[r-l+1];
while(){
    
}

}

void merge_sort(vector<int>&arr,int l,int r){
if(l<r){
    int m=(l+r)/2;
    merge_sort(arr,l,m);
    merge_sort(arr,m+1,r);
    merge(arr,l,m,r);
}
}
};

int main(){
    int size;
    // Taking the size of the array as input
cout<<"Enter the size of the array:" <<endl;
cin>>size;
   // Dynamically creating a vector of integers
vector<int> arr;

 cout << "Enter the array contents:" << endl;

 for(int i=0;i<size;i++){
    int val;
    cin>>val;
    arr.push_back(val);
 }

 cout<<"The Unsorted Array is:"<<endl;
 for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
 }
    cout << endl;

Sorter sortObj;

    // Calling the merge_sort() function
    sortObj.merge_sort(arr,0,size-1);

cout << "The Sorted array is:" << endl;
    for (int k = 0; k < size; k++) {
        cout << arr[k] << " ";
    }
    cout << endl;

return 0;
}