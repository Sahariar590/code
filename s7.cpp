#include <iostream>
using namespace std;

int main() {
    int m, n, p, q;

    // Input dimensions for matrices
    cout << "Enter rows and columns for matrix A: ";
    cin >> m >> n;
    cout << "Enter rows and columns for matrix B: ";
    cin >> p >> q;

    // Check if multiplication is possible
    if (n != p) {
        cout << "Matrix multiplication not possible. Columns of A must be equal to rows of B." << endl;
        return 1;
    }

    // Declare matrices
    int A[m][n], B[p][q], result[m][q];

    // Input matrix A
    cout << "Enter elements of matrix A: " << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }

    // Input matrix B
    cout << "Enter elements of matrix B: " << endl;
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            cin >> B[i][j];
        }
    }

    // Initialize the result matrix with zeros
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            result[i][j] = 0;
        }
    }

    // Perform matrix multiplication
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            for (int k = 0; k < n; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Output the result
    cout << "Resulting matrix: " << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
