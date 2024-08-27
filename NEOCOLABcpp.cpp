// Single File Programming Question
// Problem Statement



// A company is developing a system to manage and calculate different types of power outputs for its machinery. Each machine requires a specific base value and exponent to compute its power output.



// The company needs a utility that calculates the power of a base number raised to an exponent using the call by reference.



// For example, if the base is 2 and the exponent is 3, the power is 23 = 8.



// Function Specification: void power(int& b, int& e)



// Note: This is a sample question asked in Infosys recruitment.

// Input format :
// The input consists of two integers b and e, representing the base number and exponent, separated by a space.

// Output format :
// The output prints a single integer representing the result of the power of the base number raised to the exponent.



// Refer to the sample output for the formatting specifications.

// Code constraints :
// 1 ≤ b ≤ 10

// 0 ≤ e ≤ 6

// Sample test cases :
// Input 1 :
// 5 3
// Output 1 :
// 125
// Input 2 :
// 2 3
// Output 2 :
// 8
// Input 3 :
// 5 0
// Output 3 :
// 1
// Note :
// The program will be evaluated only after the “Submit Code” is clicked.
// Extra spaces and new line characters in the program output will result in the failure of the test case.
// Marks : 10
// Negative Marks : 0

#include <iostream>

// Function to calculate the power of a base raised to an exponent
void power(int& b, int& e) {
    int result = 1;
    for (int i = 0; i < e; ++i) {
        result *= b;
    }
    // Print the result directly
    std::cout << result;
}

int main() {
    int base, exponent;

    // Input the base and exponent
    std::cin >> base >> exponent;

    // Calculate and output the power
    power(base, exponent);

    return 0;
}// You are using GCC

