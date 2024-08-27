// Problem Statement



// You are developing a module for a text-processing application that will manipulate integers. The module should provide functionalities to set an integer, count the number of digits, find the number of odd digits, and calculate the sum of odd digits in the integer.



// You are tasked with implementing an IntegerManipulator class that performs various operations on a given integer. The class should provide methods to count the number of digits, find the number of odd digits, and calculate the sum of odd digits in the integer.



// Use a Non-inline member function.



// Note: This is a sample question asked in a mPhasis interview.

// Input format :
// The input consists of an integer n.

// Output format :
// The first line displays the number of digits in the number.

// The second line displays the number of odd digits in the integer.



// Refer to the sample output for formatting specifications.

// Code constraints :
// 1 ≤ n ≤ 109

// Sample test cases :
// Input 1 :
// 1124
// Output 1 :
// Number of digits: 4
// Number of odd digits: 2
// Input 2 :
// 2468
// Output 2 :
// Number of digits: 4
// Number of odd digits: 0
// Note :
// The program will be evaluated only after the “Submit Code” is clicked.
// Extra spaces and new line characters in the program output will result in the failure of the test case.
// Marks : 10
// Negative Marks : 0

// You are using GCC
#include <iostream>

class IntegerManipulator {
private:
    int number;

public:
    // Constructor to set the initial number
    IntegerManipulator(int n) : number(n) {}

    // Member function to count the number of digits in the integer
    int countDigits();

    // Member function to find the number of odd digits in the integer
    int countOddDigits();

    // Member function to calculate the sum of odd digits in the integer
    int sumOddDigits();
};

// Implementation of countDigits member function
int IntegerManipulator::countDigits() {
    int count = 0;
    int temp = number;
    while (temp > 0) {
        temp /= 10;
        count++;
    }
    return count;
}

// Implementation of countOddDigits member function
int IntegerManipulator::countOddDigits() {
    int count = 0;
    int temp = number;
    while (temp > 0) {
        int digit = temp % 10;
        if (digit % 2 != 0) {
            count++;
        }
        temp /= 10;
    }
    return count;
}

// Implementation of sumOddDigits member function
int IntegerManipulator::sumOddDigits() {
    int sum = 0;
    int temp = number;
    while (temp > 0) {
        int digit = temp % 10;
        if (digit % 2 != 0) {
            sum += digit;
        }
        temp /= 10;
    }
    return sum;
}

int main() {
    int n;
    std::cin >> n;

    IntegerManipulator manipulator(n);

    std::cout << "Number of digits: " << manipulator.countDigits() << std::endl;
    std::cout << "Number of odd digits: " << manipulator.countOddDigits() << std::endl;

    return 0;
}
