#include <iostream>
using namespace std;

int main() {
    int aRows, aCols, bRows, bCols;
    cout << "Enter the number of rows and columns for matrix A: ";
    cin >> aRows >> aCols;
    cout << "Enter the number of rows and columns for matrix B: ";
    cin >> bRows >> bCols;

    if (aCols != bRows) {
        cout << "Error: The number of columns in matrix A must match the number of rows in matrix B" << endl;
        return 1;
    }

    int matrixA[aRows][aCols], matrixB[bRows][bCols], result[aRows][bCols];

    cout << "Enter the elements of matrix A:" << endl;
    for (int i = 0; i < aRows; i++) {
        for (int j = 0; j < aCols; j++) {
            cin >> matrixA[i][j];
        }
    }

    cout << "Enter the elements of matrix B:" << endl;
    for (int i = 0; i < bRows; i++) {
        for (int j = 0; j < bCols; j++) {
            cin >> matrixB[i][j];
        }
    }

    // Initialize the result matrix with zeroes
    for (int i = 0; i < aRows; i++) {
        for (int j = 0; j < bCols; j++) {
            result[i][j] = 0;
        }
    }

    // Perform matrix multiplication
    for (int i = 0; i < aRows; i++) {
        for (int j = 0; j < bCols; j++) {
            for (int k = 0; k < aCols; k++) {
                result[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }

    cout << "The result of matrix multiplication is:" << endl;
    for (int i = 0; i < aRows; i++) {
        for (int j = 0; j < bCols; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
