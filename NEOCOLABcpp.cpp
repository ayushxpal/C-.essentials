// Single File Programming Question
// Problem Statement



// Shabu works at a library and needs to analyze the frequency of digits in identification numbers. Help Shabu by writing a program that counts how many times each digit (0-9) appears in a given number. The output should use the setw manipulator function for formatting.



// Note: Make the width length as 2.

// Input format :
// The input consists of an integer N, representing the identification number.

// Output format :
// For each digit (0-9) that appears in the number, output the digit and the number of times it appears, formatted with a width of 2 for the count.



// The output should be in the format: "Digit X: Y times", where X is the digit and Y is its count.



// Refer to the sample outputs for the formatting specifications.

// Code constraints :
// 102 ≤ N ≤ 109

// Sample test cases :
// Input 1 :
// 12312
// Output 1 :
// Digit 1:  2 times
// Digit 2:  2 times
// Digit 3:  1 times
// Input 2 :
// 123
// Output 2 :
// Digit 1:  1 times
// Digit 2:  1 times
// Digit 3:  1 times
// Input 3 :
// 900
// Output 3 :
// Digit 0:  2 times
// Digit 9:  1 times
// Note :
// The program will be evaluated only after the “Submit Code” is clicked.
// Extra spaces and new line characters in the program output will result in the failure of the test case.
// Marks : 10
// Negative Marks : 0

#include <iostream>
#include <iomanip> // For using 

int main() {
    long long N;
    std::cin >> N;

    int digit_count[10] = {0};  // Array to hold counts for each digit 0-9

    // Process each digit in the number
    while (N > 0) {
        int digit = N % 10;
        digit_count[digit]++;
        N /= 10;
    }

    // Output the results using a whitelist approach (only necessary includes and functionalities)
    for (int i = 0; i < 10; ++i) {
        if (digit_count[i] > 0) {
            std::cout << "Digit " << i << ": " << std::setw(2) << digit_count[i] << " times" << std::endl;
        }
    }

    return 0;
}