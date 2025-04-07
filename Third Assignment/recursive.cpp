#include<iostream>
using namespace std;
int binarySearchRecursive(int arr[], int left, int right, int target) {
    if (left > right) {
        return -1; // Base case: target not found
    }
    
    int mid = left + (right - left) / 2;
    
    if (arr[mid] == target) {
        return mid;
    } else if (arr[mid] < target) {
        return binarySearchRecursive(arr, mid + 1, right, target);
    } else {
        return binarySearchRecursive(arr, left, mid - 1, target);
    }
}

// Wrapper function for easier calling
int binarySearchRecursiveWrapper(int arr[], int size, int target) {
    return binarySearchRecursive(arr, 0, size - 1, target);
}