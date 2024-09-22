#include <iostream>
using namespace std;

void input(int matrix[10][10], int rows, int cols) {
    cout << "Enter values for the matrix (" << rows << "x" << cols << "):" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> matrix[i][j];
        }
    }
}
void sort(int arr[10][10],int rows,int cols){
    int l = rows * cols;
    for (int i = 0; i < l - 1; ++i) {
        int mir = i / cols;
        int mic = i % cols;
        int minValue = arr[mir][mic];

        for (int j = i + 1; j < l; ++j) {
            int cr = j / cols;
            int cc = j % cols;
            if (arr[cr][cc] < minValue) {
                minValue = arr[cr][cc];
                mir = cr;
                mic = cc;
            }
        }
        if (mir != i / cols || mic != i % cols) {
            swap(arr[i / cols][i % cols], arr[mir][mic]);
        }
    }
    // int temp[100],k=0;
    // for (int i = 0; i < rows; ++i) {
    //     for (int j = 0; j < cols; ++j) {
    //         temp[k++] = matrix[i][j];
    //     }
    // }
    // for (int i = 0; i < k; ++i) {
    //     for (int j = 0; j < k; ++j) {
    //         if(temp[j]>temp[j+1]){
    //             int t=temp[j];
    //             temp[j]=temp[j+1];
    //             temp[j+1]=t;
    //         }
    //     }
    // }
    // k=0;
    // for (int i = 0; i < rows; ++i) {
    //     for (int j = 0; j < cols; ++j) {
    //         matrix[i][j]=temp[k++];
    //     }
    // }
}

void print(const int matrix[10][10], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << matrix[i][j] << " "; 
        }
        cout << endl;
    }
}

int main() {
    int a1[10][10], n, m;

    cout << "Enter values for n and m: ";
    cin >> n >> m;

    input(a1, n, m);
    sort(a1,n,m);
    print(a1, n, m);

    return 0;
}