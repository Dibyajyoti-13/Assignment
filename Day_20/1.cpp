#include <iostream>
using namespace std;

void inputMatrix(int matrix[10][10], int rows, int cols) {
    cout << "Enter values for the matrix (" << rows << "x" << cols << "):" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> matrix[i][j];
        }
    }
}

void rotateMatrix(const int input[10][10], int output[10][10], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            output[i][j] = input[cols - j - 1][i];
        }
    }
}

void printMatrix(const int matrix[10][10], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int a1[10][10], a2[10][10], n, m;
    cout << "Enter values for n and m: ";
    cin >> n >> m;

    inputMatrix(a1, n, m);
    rotateMatrix(a1, a2, n, m);
    cout << "Rotated matrix:" << endl;
    printMatrix(a2, n, m);
    return 0;
}