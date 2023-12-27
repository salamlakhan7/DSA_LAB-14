#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n) {
    bool isUnsorted;
    do {
        isUnsorted = false;
        for (int i = 0; i < n - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                isUnsorted = true;
                for (; i < n - 1; i++) {
                    if (arr[i] > arr[i + 1]) {
                        swap(arr[i], arr[i + 1]);
                    }
                }
            }
        }
    } while (isUnsorted);
}

int main() {
    int arr[] = {5, 3, 1, 9, 8, 2, 4, 7};
    int N = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, N);
    cout << "Sorted array: \n";
    for (int i = 0; i < N; i++) {
        cout << " " << arr[i];
    }
    return 0;
}

