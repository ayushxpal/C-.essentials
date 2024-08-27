// Single File Programming Question
// Problem Statement



// Alex is a math enthusiast who loves playing with numbers. One day, Alex came across a challenge to write a program that reverses a given number. Intrigued by the challenge, Alex decides to write a program using reference variables.



// Can you help Alex by creating a program that reverses the number using reference variables?



// Function Name: void reverseNumber



// Note: This is a sample question asked in a HCL interview.

// Input format :
// The input consists of a positive integer N.

// Output format :
// The output displays the reversed number of N.

// Code constraints :
// 1 ≤ N ≤ 107

// Sample test cases :
// Input 1 :
// 157
// Output 1 :
// 751
// Input 2 :
// 120
// Output 2 :
// 21
// Note :
// The program will be evaluated only after the “Submit Code” is clicked.
// Extra spaces and new line characters in the program output will result in the failure of the test case.


// You are using GCC
#include <iostream>
using namespace std;

// Function to reverse the number using a reference variable
void reverseNumber(int &N) {
    int reversedNumber = 0;
    while (N > 0) {
        int digit = N % 10;
        reversedNumber = reversedNumber * 10 + digit;
        N /= 10;
    }
    N = reversedNumber;  // Update the original number with the reversed result
}

int main() {
    int N;
    cin >> N;

    reverseNumber(N);  // Pass the number by reference to reverse it

    cout << N << endl;  // Print the reversed number

    return 0;
}