#include <bits/stdc++.h>

using namespace std;

bool linearSearch(int arr[], int size, int key) {
    // time complexity = O(n)

    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int arr[10] = {5, 7, -2, 10, 22, -2, 0, 5, 22, 1};

    int key;
    cin >> key;

    bool found = linearSearch(arr, 10, key);

    if (found) {
        cout << "Key is present" << endl;
    } else {
        cout << "Key is absent" << endl;
    }

    return 0;
}