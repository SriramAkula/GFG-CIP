// Divide and conquer
// worst case time :O(n^2)
/*
    Even O(n^2) worst case,it is considered faster
        1.In-place
        2.cache friendly
        3.avg case isO(nlogn)
        4.Tail recursive
    Partition is key function(Naive-stable,Lomuto,Hoare)
*/  

#include <iostream>
using namespace std;

// Function to implement the Lomuto partition scheme
int lomutoPartition(int arr[], int l, int h) {
    int pivot = arr[h]; // Pivot
    int i = l - 1; // Index of smaller element

    for (int j = l; j <= h - 1; j++) {
        // If current element is smaller than or equal to pivot
        if (arr[j] <= pivot) {
            i++; // Increment index of smaller element
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[h]);
    return (i + 1);
}

// Function to implement quicksort using Lomuto partition
void qSort(int arr[], int l, int h) {
    if (l < h) {
        int p = lomutoPartition(arr, l, h);
        qSort(arr, l, p - 1); // Recursively sort elements before partition
        qSort(arr, p + 1, h); // Recursively sort elements after partition
    }
}

// Utility function to print an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Given array is: ";
    printArray(arr, n);

    qSort(arr, 0, n - 1);

    cout << "Sorted array is: ";
    printArray(arr, n);
    return 0;
}
