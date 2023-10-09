#include <bits/stdc++.h>

using namespace std;

void bubbleSort(vector<int> arr, int n) {
    // time complexity = O(n^2)
    // space complexity = O(1)

    for (int i = 1; i < n; i++) {
        bool swapped = false;
        for (int j = 0; j < n - i; j++) {
            // process elements till (n-i)th index
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false) {
            // already sorted
            break;
        }
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    vector<int> arr = {3, 2, 6, 4, 1};
    bubbleSort(arr, 5);
    return 0;
}