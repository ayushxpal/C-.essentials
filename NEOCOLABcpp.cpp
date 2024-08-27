// Single File Programming Question
// Problem Statement



// A bookstore wants to find the total revenue from book sales over a specific range of days. Each day’s revenue is equal to the day’s number - so day 1 has Rs. 1, day 2 has Rs. 2, and so on.



// The management needs a tool to calculate the total revenue for any given range of days using call-by-value. The tool should take two integers as input: the starting and ending days of the range. It should then compute the sum of revenues for all days in that range.



// Function Specifications: int calculateSum(int lower, int upper)



// Note: This is a sample question asked in TCS recruitment.

// Input format :
// The first line consists of an integer, lowerLimit, representing the start of the day range.

// The second line consists of an integer, upperLimit, representing the end-of-the-day range.

// Output format :
// The output displays a single integer representing the total revenue from book sales from the lowerLimit day to the upperLimit day.



// Refer to the sample output for the formatting specifications.

// Code constraints :
// 1 ≤ lowerLimit, upperLimit ≤ 50

// lowerLimit < upperLimit

// Sample test cases :
// Input 1 :
// 1
// 10
// Output 1 :
// 55
// Input 2 :
// 15
// 20
// Output 2 :
// 105
// Note :
// The program will be evaluated only after the “Submit Code” is clicked.
// Extra spaces and new line characters in the program output will result in the failure of the test case.


// You are using GCC
#include <iostream>

// Function to calculate the sum of revenues for the given range of days
int calculateSum(int lower, int upper) {
    int totalRevenue = 0;
    for (int day = lower; day <= upper; ++day) {
        totalRevenue += day;
    }
    return totalRevenue;
}

int main() {
    int lowerLimit, upperLimit;

    // Input the lower and upper limits representing the day range
    std::cin >> lowerLimit >> upperLimit;

    // Calculate the total revenue over the given range
    int totalRevenue = calculateSum(lowerLimit, upperLimit);

    // Output the total revenue
    std::cout << totalRevenue;

    return 0;
}