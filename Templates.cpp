#include <bits/stdc++.h>
using namespace std;
#define FAST_IO (ios_base::sync_with_stdio(false), cin.tie(NULL));

// Linear Search
bool linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return 1;
        }
    }
    return 0;
}

// Binary Search
int binarySearch(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;

    int mid = start + (end - start) / 2;  // optimisation

    while (start <= end) {
        if (arr[mid] == key) {
            return mid;
        }

        if (key > arr[mid]) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }
    return -1;
}

// Bubble Sort
void bubbleSort(vector<int> arr, int n) {
    for (int i = 1; i < n; i++) {
        bool swapped = false;
        for (int j = 0; j < n - i; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false) {
            break;  // already sorted
        }
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

// Insertion Sort
void insertionSort(vector<int> arr, int n) {
    for (int i = 1; i < n; i++) {
        int temp = arr[i];
        int j = i - 1;
        for (; j >= 0; j--) {
            if (arr[j] > temp) {
                arr[j + 1] = arr[j];  // shift
            } else {
                break;
            }
        }
        arr[j + 1] = temp;
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

// Selection Sort
void selectionSort(vector<int> &arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    FAST_IO
    return 0;
}