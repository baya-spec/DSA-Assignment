#include<iostream>
using namespace std;
int interpolationSearch(int arr[], int size, int target) {
    int low = 0;
    int high = size - 1;
    
    while (low <= high && target >= arr[low] && target <= arr[high]) {
        // Estimate position
        int pos = low + ((double)(high - low) / (arr[high] - arr[low])) * (target - arr[low]);
        
        if (arr[pos] == target) return pos;
        
        if (arr[pos] < target) {
            low = pos + 1;
        } else {
            high = pos - 1;
        }
    }
    return -1;
}