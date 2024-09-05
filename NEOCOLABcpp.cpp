// Single File Programming Question
// Problem Statement



// Vijay wants to write a program for the multiplication of square matrices. Help him write the code.



// Note: Square matrices mean the number of rows equals the number of columns in the given matrix.

// Input format :
// The first line of input consists of the matrix size M.

// The next M lines of input consist of the M elements in each line separated by space representing the first matrix.

// After being separated by a new line, the next M lines of input consist of the M elements in each line separated by space representing the second matrix.

// Output format :
// The output should display the product of the two matrices in a M x M format.

// Each element of the matrix should be separated by a tab space (\t).



// Refer to the sample output for the formatting specifications.

// Code constraints :
// In this scenario, the test cases fall under the following constraints:

// 1 ≤ M ≤ 10

// 0 ≤ elements ≤ 100

// Sample test cases :
// Input 1 :
// 3
// 2 3 2
// 3 2 3
// 3 3 3

// 4 5 6
// 2 3 1
// 1 2 3
// Output 1 :
// The product of the two matrices is:
// 16	23	21	
// 19	27	29	
// 21	30	30	
// Input 2 :
// 2
// 2 2
// 2 3

// 5 6
// 7 8
// Output 2 :
// The product of the two matrices is:
// 24	28	
// 31	36	
// Note :
// The program will be evaluated only after the “Submit Code” is clicked.
// Extra spaces and new line characters in the program output will result in the failure of the test case.

#include <iostream>
#include <iomanip> // For setting output precision
using namespace std;

// Function to multiply two matrices
void multiplyMatrices(int M, int A[][10], int B[][10], int result[][10]) {
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < M; ++j) {
            result[i][j] = 0;
            for (int k = 0; k < M; ++k) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    int M;
    cin >> M;

    int A[10][10], B[10][10], result[10][10];

    // Reading the first matrix
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < M; ++j) {
            cin >> A[i][j];
        }
    }

    // Reading the second matrix
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < M; ++j) {
            cin >> B[i][j];
        }
    }

    // Multiply the matrices
    multiplyMatrices(M, A, B, result);

    // Output the result matrix
    cout << "The product of the two matrices is:" << endl;
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < M; ++j) {
            cout << result[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
