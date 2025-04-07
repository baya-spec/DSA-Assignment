void selectionSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        int min_idx = i;
        for (int j = i+1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        swap(arr[min_idx], arr[i]);
    }
}
void selectionSortPtr(int* arr, int n) {
    for (int* ptr = arr; ptr < arr + n - 1; ptr++) {
        int* min_ptr = ptr;
        
        for (int* current = ptr + 1; current < arr + n; current++) {
            if (*current < *min_ptr) {
                min_ptr = current;
            }
        }
        
        swap(*ptr, *min_ptr);
    }
}