#include <iostream>
void findSecondAndThirdLargest(int arr[], int size) {
    if (size < 2) {
        std::cout << "Array should have at least 2 elements" << std::endl;
        return;
    }

    int first = INT_MIN, second = INT_MIN, third = INT_MIN;

    for (int i = 0; i < size; i++) {
        if (arr[i] > first) {
            third = second;
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            third = second;
            second = arr[i];
        } else if (arr[i] > third && arr[i] != second && arr[i] != first) {
            third = arr[i];
        }
    }

    if (second == INT_MIN) {
        std::cout << "There is no second largest element" << std::endl;
    } else {
        std::cout << "Second largest: " << second << std::endl;
    }

    if (third == INT_MIN) {
        std::cout << "There is no third largest element" << std::endl;
    } else {
        std::cout << "Third largest: " << third << std::endl;
    }
}

int main() {
    int arr[] = {12, 45, 7, 45, 56, 89, 89, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    findSecondAndThirdLargest(arr, size);

    return 0;
}