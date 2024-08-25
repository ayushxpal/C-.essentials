// Problem statement



// Janani needs a program to sort bike registration numbers in ascending order using an insertion sort algorithm. Help her with a program that takes the number of bikes parked and their registration numbers as input, then outputs the sorted registration numbers.

// Input format :
// The first line of input consists of an integer N, representing the number of bikes.

// The second line consists of N space-separated integers representing the registration numbers of N bikes.

// Output format :
// The output displays the registration numbers in ascending order, separated by a space.



// ﻿Refer to the sample output for formatting specifications.

// Code constraints :
// In this scenario, the test cases fall under the following constraints:

// 2 ≤ N ≤ 20

// 1000 ≤ registration numbers ≤ 9999

// Sample test cases :
// Input 1 :
// 4
// 9899 7877 6766 1000
// Output 1 :
// 1000 6766 7877 9899 
// Input 2 :
// 7
// 2220 3264 6489 9080 4099 8719 8066
// Output 2 :
// 2220 3264 4099 6489 8066 8719 9080 
// Note :
// The program will be evaluated only after the “Submit Code” is clicked.
// Extra spaces and new line characters in the program output will result in the failure of the test case.


#include <iostream>
#include <vector>

void insertionSort(std::vector<int>& arr) {
    for (size_t i = 1; i < arr.size(); ++i) {
        int key = arr[i];
        int j = i - 1;

        // Move elements of arr[0..i-1], that are greater than key,
        // to one position ahead of their current position
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int N;
    std::cin >> N;  // Reading the number of bikes

    std::vector<int> registration_numbers(N);
    for (int i = 0; i < N; ++i) {
        std::cin >> registration_numbers[i];  // Reading each registration number
    }

    insertionSort(registration_numbers);

    // Output the sorted registration numbers, space separated
    for (int i = 0; i < N; ++i) {
        std::cout << registration_numbers[i];
        if (i < N - 1) {
            std::cout << " ";  // add space between numbers
        }
    }

    return 0;
}