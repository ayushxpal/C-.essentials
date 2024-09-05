// Single File Programming Question
// Problem Statement



// Janu enjoys learning puzzles from her childhood. She is given an rxc matrix and asked to sum the elements in each row. She needs to attain the sum of elements in a matrix. Create a class named MatrixSum to handle the same.

// Input format :
// The first line contains an integer r, representing the number of rows in the matrix.

// The second line contains an integer c, representing the number of columns in the matrix.

// Following these, there are r lines, each containing c integers. These integers represent the elements of the matrix, row by row.

// Output format :
// The output prints elements of each row along with the sum of each row.



// Refer to the output for formatting specifications.

// Code constraints :
// In this scenario, the test cases fall under the following constraints:

// 1 ≤ r, c ≤ 10

// 0 ≤ elements ≤ 1000

// Sample test cases :
// Input 1 :
// 2
// 3
// 27 38 59
// 73 88 99
// Output 1 :
// 27 38 59 SUM: 124
// 73 88 99 SUM: 260
// Input 2 :
// 3
// 4
// 1 2 3 4
// 5 6 7 8
// 9 3 2 4
// Output 2 :
// 1 2 3 4 SUM: 10
// 5 6 7 8 SUM: 26
// 9 3 2 4 SUM: 18
// Note :
// The program will be evaluated only after the “Submit Code” is clicked.
// Extra spaces and new line characters in the program output will result in the failure of the test case.

#include <iostream>
#include <vector>
using namespace std;

class MatrixSum {
private:
    int rows, cols;
    vector<vector<int>> matrix;

public:
    // Function to initialize the matrix with given rows and columns
    void initialize(int r, int c) {
        rows = r;
        cols = c;
        matrix.resize(rows, vector<int>(cols));
    }

    // Function to input matrix elements
    void inputMatrix() {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                cin >> matrix[i][j];
            }
        }
    }

    // Function to display the matrix and row sums
    void displaySums() const {
        for (int i = 0; i < rows; ++i) {
            int rowSum = 0;
            for (int j = 0; j < cols; ++j) {
                cout << matrix[i][j] << " ";
                rowSum += matrix[i][j];
            }
            cout << "SUM: " << rowSum << endl;
        }
    }
};

int main() {
    int r, c;
    cin >> r >> c;

    MatrixSum matrixSum;
    matrixSum.initialize(r, c);
    matrixSum.inputMatrix();
    matrixSum.displaySums();

    return 0;
}
