// Single File Programming Question
// Problem Statement



// Rina is managing the inventory for a library, where each row of a 2D matrix represents the number of different genres of books available on each shelf. To get a better overview, she wants to replace each number in a row with the sum of all numbers in that row. 



// Write a program to help Rina transform the matrix accordingly.

// Input format :
// The first line of input consists of an integer T, representing the number of test cases.

// For each test case:

// The first line contains two integers R and C, representing the number of rows and columns.
// The next R lines each contain C space-separated integers, representing the count of books of a specific genre on a shelf.
// Output format :
// For each test case, the output prints the transformed 2D matrix where each element in a row is replaced with the sum of the elements in that row.



// Refer to the sample output for formatting specifications.

// Code constraints :
// The given test cases fall under the following constraints:

// 1 ≤ T ≤ 10

// 1 ≤ R, C ≤ 10

// 0 ≤ books count ≤ 100

// Sample test cases :
// Input 1 :
// 2 
// 3 4
// 8 2 4 9
// 4 5 6 1
// 7 8 9 3
// 2 5
// 1 2 3 5 7
// 3 4 8 9 6
// Output 1 :
// 23 23 23 23 
// 16 16 16 16 
// 27 27 27 27 
// 18 18 18 18 18 
// 30 30 30 30 30 
// Input 2 :
// 1
// 3 3 
// 48 65 83 
// 45 21 76 
// 71 32 98 
// Output 2 :
// 196 196 196 
// 142 142 142 
// 201 201 201 
// Note :
// The program will be evaluated only after the “Submit Code” is clicked.
// Extra spaces and new line characters in the program output will result in the failure of the test case.


#include <iostream>
#include <vector>
using namespace std;

void processTestCase(int R, int C) {
    vector<vector<int>> matrix(R, vector<int>(C));
    vector<int> rowSum(R);

    // Reading the matrix
    for (int i = 0; i < R; ++i) {
        int sum = 0;
        for (int j = 0; j < C; ++j) {
            cin >> matrix[i][j];
            sum += matrix[i][j];
        }
        rowSum[i] = sum;
    }

    // Printing the transformed matrix
    for (int i = 0; i < R; ++i) {
        for (int j = 0; j < C; ++j) {
            cout << rowSum[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    int T;  // Number of test cases
    cin >> T;

    while (T--) {
        int R, C;
        cin >> R >> C;
        processTestCase(R, C);
    }

    return 0;
}
