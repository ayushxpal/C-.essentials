// Problem Statement



// Given an array of integers, implement the insertion sort algorithm that sorts elements at odd positions in descending order and elements at even positions in ascending order. Input consists of an integer n followed by n integers. Output the sorted array. Here, the position starts from 1.



// Example



// Input:

// array[] = {7, 10, 11, 3, 6, 9, 2, 13, 0}



// Output:      

// 11 3 7 9 6 10 2 13 0 



// Explanation:

// Even-positioned elements are 10 3 9 13. After sorting in ascending order: 3 9 10 13

// Odd-positioned elements are 7 11 6 2 0. After sorting in descending order: 11 7 6 2 0

// Final combined array: 11 3 7 9 6 10 2 13 0 

// Input format :
// The first line of input consists of an integer N, representing the number of elements.

// The second line consists of N space-separated integers representing the elements.

// Output format :
// The output displays the sorted array as described in the problem statement, separated by a space.



// ﻿Refer to the sample output for formatting specifications.

// Code constraints :
// In this scenario, the test cases fall under the following constraints:

// 1 ≤ N ≤ 30

// 0 ≤ elements ≤ 105


#include <iostream>
#include <vector>

// Function to sort elements in a vector based on step in the specified order
void insertionSortStep(std::vector<int>& arr, int start, bool ascending) {
    int n = arr.size();
    for (int i = start; i < n; i += 2) {
        int key = arr[i];
        int j = i - 2;
        if (ascending) {
            while (j >= 0 && arr[j] > key) {
                arr[j + 2] = arr[j];
                j -= 2;
            }
        } else {
            while (j >= 0 && arr[j] < key) {
                arr[j + 2] = arr[j];
                j -= 2;
            }
        }
        arr[j + 2] = key;
    }
}

int main() {
    int N;
    std::cin >> N;  // Reading the number of elements

    std::vector<int> array(N);
    for (int i = 0; i < N; ++i) {
        std::cin >> array[i];  // Reading array elements
    }

    // Sort odd-positioned elements (1-based: 1, 3, 5, ...) in descending order
    insertionSortStep(array, 0, false);
    // Sort even-positioned elements (1-based: 2, 4, 6, ...) in ascending order
    insertionSortStep(array, 1, true);

    // Print the sorted array
    for (int i = 0; i < N; ++i) {
        std::cout << array[i];
        if (i < N - 1) {
            std::cout << " ";  // Add space between numbers
        }
    }

    return 0;
}