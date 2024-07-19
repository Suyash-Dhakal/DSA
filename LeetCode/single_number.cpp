// Given an array of integers where all the elements occur twice except for one element
// Find the element that occurs exactly once and return it

#include <iostream>
#include <vector>
#include <array>
#define size 9
using namespace std;

int single_num_finder(int* arr, int num) {
    int unique = 0;
    for (int i = 0; i < num; i++) {
        unique = unique ^ arr[i];
    }
    return unique;
}

int main() {
    int arr[] = {2, 1, 3, 2, 1, 3, 5, 4, 5};
    int num = single_num_finder(arr, size);
    cout << "The element which occurs exactly once is: " << num;
    return 0;
}
