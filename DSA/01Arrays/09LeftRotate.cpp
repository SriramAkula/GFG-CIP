#include <iostream>
using namespace std;

// Helper function to reverse a portion of the array
void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

// Function to perform left rotation of the array by d positions
void leftRotate(int arr[], int n, int d) {
    if (n == 0 || d == 0 || d % n == 0) return; // Edge cases

    d = d % n; // Handle cases where d >= n

    // Reverse the first d elements
    reverse(arr, 0, d - 1);
    // Reverse the remaining elements
    reverse(arr, d, n - 1);
    // Reverse the entire array
    reverse(arr, 0, n - 1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    leftRotate(arr, n, 2); // Perform left rotation by 2 positions

    // Print the rotated array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
