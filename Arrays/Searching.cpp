// Linear Search
bool linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) return 1;
    }
    return 0;
}

// Binary Search
int binarySearch(int *arr, int s, int e, int k) {
    if (s > e) return -1;

    int mid = s + (e - s) / 2;
    if (arr[mid] == k) return mid;
    if (arr[mid] < k) return binarySearch(arr, mid + 1, e, k);
    else return binarySearch(arr, s, mid - 1, k);
}