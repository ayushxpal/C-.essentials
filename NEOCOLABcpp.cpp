// Problem Statement



// Matt is learning C++ and is interested in how inline functions work. He is practicing questions related to this concept. Help him by writing an inline function countEvenNumbers() that counts the number of even digits present in the square of a given number.



// Example 1



// Input:

// 12



// Output:

// 2



// Explanation:

// Given number = 12. After squaring (12*12 = 144). The number of even digits present is 2.



// Example 2



// Input:

// 3



// Output:

// 0



// Explanation:

// Given number = 3. After squaring (3*3 = 9). The number of even digits present is 0.



// Note: This is a sample question that can be asked in a mPhasis recruitment.

// Input format :
// The input consists of a positive integer N.

// Output format :
// The output prints an integer representing the count of even digits in the square of the given number.



// Refer to the sample output for the formatting specifications.

// Code constraints :
// 0 ≤ N ≤ 1000

// Sample test cases :
// Input 1 :
// 12
// Output 1 :
// 2
// Input 2 :
// 3
// Output 2 :
// 0
// Input 3 :
// 10
// Output 3 :
// 2
// Note :
// The program will be evaluated only after the “Submit Code” is clicked.
// Extra spaces and new line characters in the program output will result in the failure of the test case.


#include <iostream>
using namespace std;

// Inline function to count the number of even digits in the square of a number
inline int countEvenNumbers(int N) {
    int square = N * N;
    int count = 0;

    while (square > 0) {
        int digit = square % 10;
        if (digit % 2 == 0) {
            count++;
        }
        square /= 10;
    }
    return count;
}

int main() {
    int N;
    cin >> N;
    cout << countEvenNumbers(N) << endl;
    return 0;
}