#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
void insertionSortPtr(int* arr, int n) {
    for (int* ptr = arr + 1; ptr < arr + n; ptr++) {
        int key = *ptr;
        int* prev = ptr - 1;
        
        while (prev >= arr && *prev > key) {
            *(prev + 1) = *prev;
            prev--;
        }
        *(prev + 1) = key;
    }
}