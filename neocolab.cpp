// Problem Statement



// You're managing a list of product IDs on an e-commerce platform. Each product ID is an integer representing a unique product. You need to search for specific products in the list using two different search methods: linear search and binary search.



// Linear Search: This method is used when the list of product IDs is unsorted. You'll traverse the entire list to find the desired product ID.
// Binary Search: This method is used when the list of product IDs is sorted in ascending order. You'll repeatedly divide the list in half to locate the desired product ID.
// Input format :
// The first line of input contains an integer n, representing the number of products in the list.

// The second line contains n space-separated integers, each representing a unique product ID.

// The third line contains an integer key, representing the product ID to search for in the list.

// Output format :
// The first line of output prints which search method is used, either "Using Binary Search" or "Using Linear Search", depending on whether the list is sorted.

// The second line prints one of the following:

// If the product ID is found, print "[key] found at index [index]". The index value starts from 0.
// If the product ID is not found, print "[key] not found in the list".


// Refer to the sample output for formatting specifications.

// Code constraints :
// The given test cases fall under the following constraints:

// 1 ≤ n ≤ 15

// 100 ≤ product ID, key ≤ 999

// Sample test cases :
// Input 1 :
// 5
// 101 405 303 604 505
// 303
// Output 1 :
// Using Linear Search
// 303 found at index 2
// Input 2 :
// 5
// 101 405 303 604 505
// 308
// Output 2 :
// Using Linear Search
// 308 not found in the list
// Input 3 :
// 5
// 101 205 303 404 505
// 404
// Output 3 :
// Using Binary Search
// 404 found at index 3
// Input 4 :
// 5
// 101 205 303 404 505
// 409
// Output 4 :
// Using Binary Search
// 409 not found in the list
// Note :
// The program will be evaluated only after the “Submit Code” is clicked.
// Extra spaces and new line characters in the program output will result in the failure of the test case.


#include <iostream>
using namespace std;

// Linear search implementation
int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i; // Return the index where the key is found
        }
    }
    return -1; // Return -1 if key is not found
}

// Binary search implementation
int binarySearch(int arr[], int n, int key) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key) {
            return mid; // Return the index where the key is found
        }
        if (arr[mid] < key) {
            left = mid + 1; // Search in the right half
        } else {
            right = mid - 1; // Search in the left half
        }
    }
    return -1; // Return -1 if key is not found
}

// Function to check if array is sorted
bool isSorted(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }
    return true;
}

// Function to decide search method and search
int searchArray(int arr[], int n, int key) {
    if (isSorted(arr, n)) {
        cout << "Using Binary Search" << endl;
        return binarySearch(arr, n, key);
    } else {
        cout << "Using Linear Search" << endl;
        return linearSearch(arr, n, key);
    }
}

int main() {
    int n, key;
    cin >> n;
    
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cin >> key;

    int result = searchArray(arr, n, key);

    if (result != -1) {
        cout << key << " found at index " << result << endl;
    } else {
        cout << key << " not found in the list" << endl;
    }

    return 0;
}