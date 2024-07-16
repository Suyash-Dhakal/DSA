#include <iostream>
#include <vector>

using namespace std;

class Sorter {
public:
    void merge(vector<int>& arr, int l, int m, int r) {
        int i = l, j = m + 1, k = 0;
        vector<int> temp(r - l + 1); // Temporary array to store merged elements

        while (i <= m && j <= r) {
            if (arr[i] <= arr[j]) {
                temp[k++] = arr[i++];
            } else {
                temp[k++] = arr[j++];
            }
        }

        // If any elements are left in the left subarray, add them to the temp array
        while (i <= m) {
            temp[k++] = arr[i++];
        }

        // If any elements are left in the right subarray, add them to the temp array
        while (j <= r) {
            temp[k++] = arr[j++];
        }

        // Copy the sorted elements back into the original array
        for (int p = 0; p < k; p++) {
            arr[l + p] = temp[p];
        }
    }

    void merge_sort(vector<int>& arr, int l, int r) {
        if (l < r) {
            int m = (l + r) / 2;
            merge_sort(arr, l, m);
            merge_sort(arr, m + 1, r);
            merge(arr, l, m, r);
        }
    }
};

int main() {
    int size;
    cout << "Enter the size of the array:" << endl;
    cin >> size;

    vector<int> arr(size);
    cout << "Enter the array contents:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "The Unsorted Array is:" << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    Sorter sortObj;
    sortObj.merge_sort(arr, 0, size - 1);

    cout << "The Sorted array is:" << endl;
    for (int k = 0; k < size; k++) {
        cout << arr[k] << " ";
    }
    cout << endl;

    return 0;
}
