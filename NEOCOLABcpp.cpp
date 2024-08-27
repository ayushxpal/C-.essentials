// Problem Statement



// Raj oversees parcel IDs in his logistics company and needs to identify prime numbers within a given range for special processing. 



// He wants to create a program that reads the start and end values of this range and uses reference variables to determine and display all prime parcel IDs in ascending order.



// Function Name: void generatePrimesInRange



// Note: This is a sample question asked in TCS recruitment.

// Input format :
// The input consists of two integers start and end, representing the starting and ending parcel ID, respectively separated by space.

// Output format :
// The output displays a single line containing all prime parcel IDs within the specified range, separated by spaces.



// Refer to the sample output for the formatting specifications.

// Code constraints :
// 0 ≤ start and end ≤ 100

// Sample test cases :
// Input 1 :
// 0 10
// Output 1 :
// 2 3 5 7 
// Note :
// The program will be evaluated only after the “Submit Code” is clicked.
// Extra spaces and new line characters in the program output will result in the failure of the test case.


// You are using GCC
#include <iostream>
#include <cmath>

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) return false; // 0 and 1 are not prime numbers
    if (num == 2) return true;  // 2 is the only even prime number
    if (num % 2 == 0) return false; // Eliminate multiples of 2

    // Check for factors from 3 to sqrt(num)
    for (int i = 3; i <= std::sqrt(num); i += 2) {
        if (num % i == 0) return false;
    }
    return true;
}

// Function to generate and print prime numbers in a given range
void generatePrimesInRange(int& start, int& end) {
    for (int i = start; i <= end; ++i) {
        if (isPrime(i)) {
            std::cout << i << " ";
        }
    }
}

int main() {
    int start, end;
    
    // Read input values for start and end
    std::cin >> start >> end;

    // Generate and output prime numbers within the range
    generatePrimesInRange(start, end);

    return 0;
}

