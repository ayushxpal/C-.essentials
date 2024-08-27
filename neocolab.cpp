// Problem Statement



// ﻿You're managing employee records for a company. The employee IDs from two different departments are stored in two separate arrays, both sorted in ascending order. Your task is to merge these two sorted arrays into a single sorted array, ensuring that the order is maintained.

// Input format :
// The first line of input contains an integer n, representing the number of employees in the first department.

// The second line contains n space-separated integers, each representing a sorted employee ID from the first department.

// The third line contains an integer m, representing the number of employees in the second department.

// The fourth line contains m space-separated integers, each representing a sorted employee ID from the second department.

// Output format :
// The output prints the merged sorted employee IDs from both departments.



// Refer to the sample output for formatting specifications.

// Code constraints :
// The given test cases fall under the following constraints:

// 0 ≤ n, m ≤ 10

// 101 ≤ employee ID ≤ 990

// Sample test cases :
// Input 1 :
// 4
// 101 203 305 407
// 4
// 102 204 306 408
// Output 1 :
// 101 102 203 204 305 306 407 408 
// Input 2 :
// 4
// 101 203 305 407
// 4
// 203 305 508 609
// Output 2 :
// 101 203 203 305 305 407 508 609 
// Input 3 :
// 3
// 102 204 306
// 0
// Output 3 :
// 102 204 306 
// Input 4 :
// 2
// 101 202
// 4
// 150 250 350 450
// Output 4 :
// 101 150 202 250 350 450 
// Note :
// The program will be evaluated only after the “Submit Code” is clicked.
// Extra spaces and new line characters in the program output will result in the failure of the test case.


// You are using GCC
#include <iostream>
#include <vector>

using namespace std;

// Function to merge two sorted arrays
vector<int> mergeSortedArrays(const vector<int>& arr1, const vector<int>& arr2) {
    vector<int> merged;
    int i = 0, j = 0;
    int n = arr1.size(), m = arr2.size();
    
    while (i < n && j < m) {
        if (arr1[i] <= arr2[j]) {
            merged.push_back(arr1[i]);
            i++;
        } else {
            merged.push_back(arr2[j]);
            j++;
        }
    }

    while (i < n) {
        merged.push_back(arr1[i]);
        i++;
    }

    while (j < m) {
        merged.push_back(arr2[j]);
        j++;
    }

    return merged;
}

int main() {
    int n, m;
    
    // Reading data for the first department
    cin >> n;
    vector<int> dep1(n);
    for (int i = 0; i < n; i++) {
        cin >> dep1[i];
    }
    
    // Reading data for the second department
    cin >> m;
    vector<int> dep2(m);
    for (int i = 0; i < m; i++) {
        cin >> dep2[i];
    }
    
    // Merging the two sorted arrays
    vector<int> merged = mergeSortedArrays(dep1, dep2);
    
    // Output the merged array
    for (const int& id : merged) {
        cout << id << " ";
    }
    cout << endl;

    return 0;
}
