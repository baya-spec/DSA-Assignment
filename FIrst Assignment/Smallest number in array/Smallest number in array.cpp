#include <iostream>
int findSmallest(int arr[], int size) {
    int smallest = INT_MAX; 
    for (int i = 0; i < size; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    
    return smallest;
}

int main() {
    int arr[] = {12, 45, 7, 23, 56, 89, 2, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int smallest = findSmallest(arr, size);
    
    std::cout << "The smallest number in the array is: " << smallest << std::endl;
    
    return 0;
}