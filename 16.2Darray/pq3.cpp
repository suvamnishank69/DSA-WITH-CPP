// Question 3 : Write a program to Find Transpose of a Matrix.
//  What is Transpose?
//    Transpose of a matrix is the process of swapping the rows to columns. For a 2x3 matrix,

// Matrix
// a11 a12 a13
// a21 a22 a23

// Transposed Matrix
// a11 a21
// a12 a22
// a13 a23


#include <iostream>
using namespace std;

int main() {
    int rows = 2, cols = 3;

    // Original matrix
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    // Transpose matrix will have dimensions cols x rows
    int transpose[3][2];

    // Compute transpose: move element at [i][j] -> [j][i]
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j]; // ======> imp line
        }
    }

    // Print original matrix
    cout << "Original Matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // Print transposed matrix
    cout << "\nTranspose Matrix:\n";
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

// try to do it again after 2 days


// same q as 867




