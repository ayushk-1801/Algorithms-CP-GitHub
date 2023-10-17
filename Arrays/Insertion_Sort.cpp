#include <bits/stdc++.h>

using namespace std;

void insertionSort(vector<int> arr, int n) {
    // time complexity = O(n^2)
    // space complexity = O(1)

    for (int i = 1; i < n; i++) {
        int temp = arr[i];
        int j = i - 1;
        for (; j >= 0; j--) {
            if (arr[j] > temp) {
                // shift
                arr[j + 1] = arr[j];
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

int main() {
    vector<int> arr = {3, 2, 6, 4, 1};
    insertionSort(arr, 5);
    return 0;
}