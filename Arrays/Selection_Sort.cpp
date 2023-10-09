#include <bits/stdc++.h>

using namespace std;

void selectionSort(vector<int> &arr, int n) {
    // time complexity = O(n^2)
    // space complexity = O(1)

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
    vector<int> arr = {3, 2, 6, 4, 1};
    selectionSort(arr, 5);
    return 0;
}