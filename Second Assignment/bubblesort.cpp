#include <iostream>
using namespace std;

void bubbleSort(int* arr, int size) {
    for (int i = 0; i < size-1; i++) {
        for (int* ptr = arr; ptr < arr+size-i-1; ptr++) {
            if (*ptr > *(ptr+1)) {
                // Swap elements
                int temp = *ptr;
                *ptr = *(ptr+1);
                *(ptr+1) = temp;
            }
        }
    }
}