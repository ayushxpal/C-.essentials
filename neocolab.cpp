// Single File Programming Question
// Problem Statement



// You have an array of integers that need to be sorted in ascending order. The array is sorted using an algorithm that repeatedly selects the smallest element from the unsorted portion of the array and swaps it with the first unsorted element. This process continues until the entire array is sorted.



// Write a program to sort the array using the appropriate algorithm.

// Input format :
// The first line of the input consists of the size of the array N.

// The second line of the input consists of array elements.

// Output format :
// The output displays the sorted array, separated by a space.



// Refer to the sample output for the formatting specifications.

// Code constraints :
// In this scenario, the test cases fall under the following constraints:

// 1 ≤ N ≤ 50

// 1 ≤ array elements ≤ 1000

// Sample test cases :
// Input 1 :
// 5
// 26 14 33 27 54
// Output 1 :
// 14 26 27 33 54 
// Input 2 :
// 8
// 24 56 78 31 15 62 76 94
// Output 2 :
// 15 24 31 56 62 76 78 94 
// Note :
// The program will be evaluated only after the “Submit Code” is clicked.
// Extra spaces and new line characters in the program output will result in the failure of the test case.



#include <iostream>
#include <vector>

void selectionSort(std::vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i) {
        // Find the index of the minimum element in the unsorted portion
        int minIndex = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Swap the found minimum element with the first unsorted element
        std::swap(arr[i], arr[minIndex]);
    }
}

int main() {
    int N;
    std::cin >> N;  // Reading the size of the array

    std::vector<int> array(N);
    for (int i = 0; i < N; ++i) {
        std::cin >> array[i];  // Reading array elements
    }

    selectionSort(array);

    // Output the sorted array, space separated
    for (int i = 0; i < N; ++i) {
        std::cout << array[i];
        if (i < N - 1) {
            std::cout << " ";  // Add space between numbers
        }
    }

    return 0;
}// You are using GCC
