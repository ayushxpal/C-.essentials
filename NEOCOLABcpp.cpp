// Single File Programming Question
// Problem Statement



// Kate is analyzing a series of measurements and needs to determine how many of these measurements fall outside a specified acceptable range. Given a list of measurement values, write a program to count and display the number of measurements that are either below the lower limit or above the upper limit of the specified range.

// Input format :
// The first line of input consists of an integer X, representing the number of measurements.

// The second line consists of X space-separated integers, representing the measurement values.

// The third line consists of two space-separated integers L and R, defining the acceptable range.

// Output format :
// The output prints an integer, representing the count of measurements that fall outside the specified range defined by L and R.

// If there are no such elements, print "0".



// Refer to the sample output for formatting specifications.

// Code constraints :
// In this scenario, the test cases fall under the following constraints:

// 2 ≤ X ≤ 10

// 1 ≤ measurement value ≤ 100

// L < R

// L and R are not inclusive.

// Sample test cases :
// Input 1 :
// 5
// 13 24 15 26 34
// 11 16
// Output 1 :
// 3
// Input 2 :
// 6
// 45 57 89 53 90 98
// 45 89
// Output 2 :
// 2
// Input 3 :
// 3
// 43 56 67
// 43 68
// Output 3 :
// 0
// Note :
// The program will be evaluated only after the “Submit Code” is clicked.
// Extra spaces and new line characters in the program output will result in the failure of the test case.


#include <iostream>
using namespace std;

int main() {
    int X;  // Number of measurements
    cin >> X;

    int measurements[10];  // Array to store the measurements (up to 10 as per constraints)
    for (int i = 0; i < X; i++) {
        cin >> measurements[i];
    }

    int L, R;  // Lower and upper limit of the acceptable range
    cin >> L >> R;

    int count = 0;  // Counter for measurements outside the range
    for (int i = 0; i < X; i++) {
        if (measurements[i] < L || measurements[i] > R) {  // Exclude the boundary values
            count++;  // Increment if measurement is strictly outside the acceptable range
        }
    }

    cout << count;  // Output the count
    return 0;
}
