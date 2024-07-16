#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Sorter {
public:
    void selection_sort(vector<int>& arr) { // Using reference
        int size = arr.size();
        for (int i = 0; i < size - 1; i++) {
            int min_index = i;
            for (int j = i + 1; j < size; j++) {
                if (arr[j] < arr[min_index]) {
                    min_index = j;
                }
            }
            std::swap(arr[min_index], arr[i]);
        }
    }
};

int main() {
    int size;

    // Taking the size of the array as input
    cout << "Enter the size of the array:" << endl;
    cin >> size;

    // Dynamically creating a vector of integers
    vector<int> arr;

    cout << "Enter the array contents:" << endl;

    // Filling the array with user inputs
    for (int i = 0; i < size; i++) {
        int val;
        cin >> val;
        arr.push_back(val);
    }

    cout << "The Unsorted array is:" << endl;
    for (int j = 0; j < size; j++) {
        cout << arr[j] << " ";
    }
    cout << endl;

    Sorter sortObj;

    // Calling the selection_sort() function
    sortObj.selection_sort(arr);

    cout << "The Sorted array is:" << endl;
    for (int k = 0; k < size; k++) {
        cout << arr[k] << " ";
    }
    cout << endl;

    return 0;
}
