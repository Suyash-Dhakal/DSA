#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Sorter{
public: 

void bubble_sort(vector<int>& a,int size) //Using reference here 'a' is an alias of var 'arr'
{
for(int i=0;i<size-1;i++){
    for(int j=0;j<size-i-1;j++){
        if(a[j]>a[j+1]){
            std::swap(a[j],a[j+1]);
        }
    }
}

}

};

int main()
{
int size;
cout<<"Enter the size of Array:"<<endl;
cin>>size;
vector<int> arr(size);
cout<<"Enter the array contents:"<<endl;
for(int i=0;i<size;i++){
    cin>>arr[i];
}

 cout << "The Unsorted Array is:" << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    Sorter sortObj;
    sortObj.bubble_sort(arr,size);

 cout << "The Sorted array is:" << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

return 0;
}