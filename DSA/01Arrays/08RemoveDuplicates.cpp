#include <iostream>
using namespace std;

int remDup(int arr[], int n) {
    if (n == 0) return 0; // Edge case: if array is empty

    int res = 1; // To store the index of the next unique element

    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[res - 1]) {
            arr[res] = arr[i];
            res++;
        }
    }

    return res; // New length of the array with unique elements
}

int main() {
    int arr[] = {10, 20, 20, 30, 30, 30};
    int n = sizeof(arr) / sizeof(arr[0]);

    int newLength = remDup(arr, n);

    // Print the modified array with unique elements
    for (int i = 0; i < newLength; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
